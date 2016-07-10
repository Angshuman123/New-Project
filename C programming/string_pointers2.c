#include<stdio.h>

int main(int argc, char const *argv[]) {
  char str1[] = "Hello";
  char *str2 = "Goodbye";

  printf("%x %x %s\n",&str1,str1,str1);
  printf("%x %x %s\n",&str2,str2,str2);
  return 0;
}
