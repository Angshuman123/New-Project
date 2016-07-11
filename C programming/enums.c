#include<stdio.h>

enum days {
  Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
};

enum suits {
  Hearts,Diamonds,Clubs,Spades
};

enum numbers {
  couple = 2, Dozen  = 12, Score = 20
};

void showdaytype(enum days day) {
  if((day == Saturday) || (day == Sunday)) {
    printf("It's the weekend\n");
  } else {
    printf("It's a working day\n");
  }
}

void showcard(enum suits card) {
  if((card == Hearts) || (card == Diamonds)) {
    printf("It's the red Suit\n");
  } else {
    printf("It's the black suit\n");
  }
}

void buyinbulk(enum numbers num) {
  printf("The customer wants to buy %d items.\n",num);
}

int main(int argc, char const *argv[]) {
  enum days today;
  enum suits playingcards;
  enum numbers num;
  today = Monday;
  playingcards = Diamonds;
  num = Dozen;
  showdaytype(today);
  showcard(playingcards);
  buyinbulk(num);
  return 0;
}
