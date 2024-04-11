#ifndef SONG_H
#define SONG_H

#include <iostream>
#include <string>
using namespace std;

class Song{
public:
Song(string title, string singer);//constructor
virtual ~Song(); //virtual destructor
string getSongTitle() const; //getter for private songTitle
string getSingerName() const; //getter for private singerName
void setSongTitle(string); //setter for songTitle
void setSingerName(string); //setter for singerName
friend ostream& operator<<(ostream& os, const Song& song) {
    os << "Title: " << song.getSongTitle() << ", Singer: " << song.getSingerName();
    return os;
}// Overload << overload perator to print a Song
//if you dont use << overload operator you will only print out memory address!!!


private: 
string songTitle;//song title
string singerName;//singer name
};

#endif 





