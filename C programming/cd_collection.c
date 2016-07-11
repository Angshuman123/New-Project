#include<stdio.h>
#include<string.h>

#define NUMBER_OF_CDS 4

enum ratings {
  Excellent,Good,Average,Worse
};

typedef char str50[50];

typedef struct cd {
  str50 name;
  str50 artist;
  int trackcount;
  enum ratings rating;
}CD;

CD cd_collection[NUMBER_OF_CDS];

void create_cdCollection() {
  strcpy(cd_collection[0].name,"Great Hits");
  strcpy(cd_collection[0].artist,"Polly Darton");
  cd_collection[0].trackcount = 20;
  cd_collection[0].rating = Excellent;

  strcpy(cd_collection[1].name,"Mega Songs");
  strcpy(cd_collection[1].artist,"Lady Googoo");
  cd_collection[1].trackcount = 18;
  cd_collection[1].rating = Good;

  strcpy(cd_collection[2].name,"The Best Ones");
  strcpy(cd_collection[2].artist,"The Warthogs");
  cd_collection[2].trackcount = 24;
  cd_collection[2].rating = Average;

  strcpy(cd_collection[3].name,"Songs From The Shows");
  strcpy(cd_collection[3].artist,"The Singing Swingers");
  cd_collection[3].trackcount = 22;
  cd_collection[3].rating = Excellent;

}

void display_collection() {
  int i;
  CD thiscd;
  for(i = 0; i < NUMBER_OF_CDS; i++) {
    thiscd = cd_collection[i];
    printf("CD #%d '%s' by '%s' has %d tracks and a rating of %d.\n",i,thiscd.name,thiscd.artist,thiscd.trackcount,thiscd.rating);
  }
}

int main(int argc, char const *argv[]) {
  create_cdCollection();
  display_collection();
  return 0;
}
