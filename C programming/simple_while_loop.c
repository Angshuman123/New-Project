#include<stdio.h>

int main(int argc, char const *argv[]) {
  char c = ' ';
  while(c != 'y') {
    printf("Enter 'y' or 'n' .... :\t");
    c = getchar();
    getchar();
  }

  printf("\n That's all folks. \n");
  return 0;
}
