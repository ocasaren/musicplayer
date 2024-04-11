#include <iostream>
#include "MusicPlayer.h"
using namespace std;

int main() {
      //Create a musicplayer with 3 songs.
      MusicPlayer player("MUSICPLAYER");
      Song song1("1) Last Time", "Becky Hill");
      Song song2("2) Chanel", "Frank Ocean");
      Song song3("3) Low", "SZA");

      player.add(song1);
      player.add(song2);
      player.add(song3);

      player.play();//Play the current song.
      player.next();//Play the next song.
      player.next();//Play the next song.
      player.next();//Play the next song.
      player.previous();//Play the previous song.
      player.print(true);//Print bool param true.
      player.print(false);//Print bool param false.
      player.remove();//Remove current song from music player.
      player.play();//Play the current song.
      player.next();//Play the next song.
      player.next();//Play the next song.
      player.next();//Play the next song.
      player.print(true);//Print list bool param true.
      player.print(false);//Print list bool param false.

  
      return 0;
  }

