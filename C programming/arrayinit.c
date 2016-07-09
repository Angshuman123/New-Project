#include<stdio.h>

int intarray[5] = {1,2,3,4,5};
double doublearray2[] = {2.1,2.3,2.4,2.5};
char chararray[] = {'h','e','l','l','o','\0'};
char chararray2[] = "world";

int main(int argc, char const *argv[]) {
  int i;

  for(i = 0; i < 5; i++) {
    intarray[i] = ((i+1) * 100); //note the use of parentheses here
  }

  printf("----for loop----\n");
  for(i = 0; i < 5; i++) {
    printf("%d\n",intarray[i]);
  }
  
  return 0;
}
