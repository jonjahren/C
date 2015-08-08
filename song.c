#include <stdio.h>
#include "song.h"

Song make_song(int seconds, int year) {
  Song newSong;

  newSong.lengthInSeconds = seconds;
  newSong.yearRecorded = year;
  display_song(newSong);

  return newSong;
  }

void display_song(Song theSong) {

  printf("The song is %i seconds long ", theSong.lengthInSeconds);
  printf("And was recorded in %i\n", theSong.yearRecorded);
  }
