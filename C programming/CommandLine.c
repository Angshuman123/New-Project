#include<stdio.h>

int main(int argc, char const *argv[]) {
    int i;
    for (i = 0; i < argc; i++) {
      printf("Hello world! argc = %d  arg %d is %s \n",argc,i,argv[i]);
    }
  return 0;
}
