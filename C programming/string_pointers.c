#include<stdio.h>

int main(int argc, char const *argv[]) {
  char str1[] = "Hello";
  char *str2 = "Goodbye"; // '*' = value at address

  printf("%s\n",str1);
  printf("%s\n",str2);

  printf("%d\n",&str1); // '&' = address of 
  printf("%d\n",&str2);
  return 0;
}
