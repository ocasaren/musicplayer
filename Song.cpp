#include "Song.h"


Song::Song(string title, string singer): songTitle(title), singerName(singer) { //constructor with initializer list
}

Song::~Song() { //destructor
}

string Song::getSongTitle() const {
    return songTitle;
}

string Song::getSingerName() const { 
    return singerName;
}

void Song::setSongTitle(string title){//setter for songTitle
  songTitle = title;
}

void Song::setSingerName(string singer){ //setter for singerName
  singerName = singer;
}



