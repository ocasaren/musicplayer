#ifndef NODE_H
#define NODE_H

#include <iostream>
#include "Song.h"
using namespace std;


class Node {

public:
Node(const Song& value) : data(value), next(nullptr), prev(nullptr) {}

private:
    Song data;
    Node* next;
    Node* prev;


friend class CircularDoublyLinkedList; 
friend class MusicPlayer;


};

#endif