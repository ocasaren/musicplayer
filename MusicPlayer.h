#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include <iostream>
#include <string>
using namespace std;
#include "CircularDoublyLinkedList.h"

//  Member functions:
class MusicPlayer{
public:
    MusicPlayer(string);
    virtual ~MusicPlayer();
    void play(); //plays the current song, meaning that this method will PRINT the properties of the Song
    void next(); //moves to the net song and plays it
    void previous(); ////moves to the previous song and plays it
    void add (Song); //adds a song before the current song
    void remove(); //removes the current song
    void print(bool reverse);//prints all songs that are in the list, starting from current to left is bool param is true and reverse order is bool parameter is false (recursive function)


//  Member variables:
private:
    string type; //will hold the type of the music player
    int size; //the current number of the songs
    CircularDoublyLinkedList playerList; 
};

#endif