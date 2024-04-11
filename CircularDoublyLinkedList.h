#ifndef CIRCULARDOUBLYLINKEDLIST_H
#define CIRCULARDOUBLYLINKEDLIST_H

#include <iostream>
#include "Node.h"
#include "Song.h"
using namespace std;

class CircularDoublyLinkedList {
public:
    CircularDoublyLinkedList(); //constructor
    ~CircularDoublyLinkedList();//destructor
    void add(Song song);//add
    void remove();//remove
    void next();//next
    void previous();//previous
    void printList(bool reverse);
    Node* getCurrentSong();
    

    private:
    Node* head;
    Node* tail;


};

#endif 