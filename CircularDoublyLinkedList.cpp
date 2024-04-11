#include "CircularDoublyLinkedList.h"

CircularDoublyLinkedList::CircularDoublyLinkedList(): head(nullptr), tail(nullptr)
{
  //initializes empty list
}

    CircularDoublyLinkedList::~CircularDoublyLinkedList() {
      //deallocates memory for all the nodes in the linked list
      //starts from the head deleting each node and updating the next and prev pointers      
        if (head) {
            Node* current = head;
            Node* next;
            do {
                next = current->next;
                delete current;
                current = next;
            } while (current != head);
        }
    }

void CircularDoublyLinkedList::add(Song song){
      ////adds a new song to the circular doubly-linked list.
        Node* newNode = new Node(song); //creates new node
        if (head == nullptr) {
          //if list is empty, new node becomes only node in list; next and prev point to it
            head = newNode;
            head->next = head;
            head->prev = head;
        } else {
          //else inserts new node at end of list and updates next and prev pointers
            Node* tail = head->prev;
            newNode->next = head;
            newNode->prev = tail;
            head->prev = newNode;
            tail->next = newNode;
        }
    }


     void CircularDoublyLinkedList::remove(){ 
        if (!head) return;
//search for node holding song and updates next and prev pointers of surrounding nodes to skip the node that will be removed
        Node* current = head;
        Node* prevNode = current->prev;
        Node* nextNode = current->next;

        prevNode->next = nextNode;
        nextNode->prev = prevNode;
//if removed node is head, head pointer updated to next node
        if (current == head) {
            head = nextNode;
        }
//remove node deleted
        delete current;
    }




    Node* CircularDoublyLinkedList::getCurrentSong() {
        return head;
    }

    void CircularDoublyLinkedList::next() {
        if (head) {
            head = head->next;
        }
    }

    void CircularDoublyLinkedList::previous() {
        if (head) {
            head = head->prev;
        }
    }


//print list either forward or backward based on reverse parameter
void CircularDoublyLinkedList::printList(bool reverse) {
    Node* current = head;
    if (reverse == true) { //print in reverse order; follow prev pointers
        do {
            cout << current->data << endl;
            current = current->prev;
        } while (current != head);
    } else { //false = print song in linear order; follow next pointers
        do {
            cout << current->data << endl;
            current = current->next;
        } while (current != head);
    }
}



