#include "MusicPlayer.h"

MusicPlayer::MusicPlayer(string playerType) : type(playerType), size(0) {
}

MusicPlayer::~MusicPlayer() { 
  }

    void MusicPlayer::play() {
        Node* currentSong = playerList.getCurrentSong();
        if (currentSong) {
            cout << "Now playing: " << currentSong->data << endl;
        }
    }

    void MusicPlayer::next() {
            playerList.next();
        play();
    }

    void MusicPlayer::previous() {
            playerList.previous();
        play();
    }

    void MusicPlayer::add(Song song) {
            playerList.add(song);
        size++;
    }

void MusicPlayer::remove() {
    Node* currentSong = playerList.getCurrentSong();
    if (currentSong) {
            playerList.remove();
        size--;
    }
}


 void MusicPlayer::print(bool reverse) {
     cout << "Library (" << size << " songs):" << endl;

     //if (reverse) {
       playerList.printList(reverse);
   //  } else {
       //playerList.printList(false); 
     // }
  }
//print(bool);
//prints all songs that are in the list, starting from current to left is bool param is true and reverse order is bool parameter is false (this function should be designed as a recursive function)

