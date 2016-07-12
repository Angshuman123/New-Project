#include<stdio.h>
#include "mystring.h"

char b[BUFSIZE];
char teststring[] = "Hello World";

int main(int args,char *argv[]) {
  int i;
  int stringpos;

  printf("Starting...\n");
  i = readln(b,sizeof(b));

  printf("b=%s; i==%d\n",b,i);
  stringpos = searchstring(b,teststring);
  if(stringpos > -1) {
    printf("%s found in %s at index #%d\n",b,teststring,stringpos);
  } else {
    printf("%s found not found in %s\n",b,teststring);
  }
}
