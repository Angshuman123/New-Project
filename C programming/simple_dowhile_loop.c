#include<stdio.h>

int main(int argc, char const *argv[]) {
  char c = 'y';
  do {
    printf("\n Enter 'y' or 'n' ...... : \t");
    c = getchar();
    getchar();
  }while(c != 'y');
  printf("\nThat's all folks!\n");
  return 0;
}
