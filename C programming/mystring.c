#include<stdio.h>
#include<string.h>
#include "mystring.h"

int readln(char s[],int maxlen) {
  char ch;
  int i = 0;
  int char_remain = 1;
  while(char_remain) {
    ch = getchar();
    if((ch == '\n') || (ch == EOF)) {
      char_remain = 0;
    } else if(i < maxlen - 1){
        s[i] = ch;
        i++;
    }
  }
  s[i] = '\0';
  return i;
}

int searchstring(char searchstr[],char sourcestr[]) {
  char *ptrtostr;
  int foundat;
  ptrtostr = strstr(sourcestr,searchstr);
  foundat = (int) (ptrtostr - sourcestr);
  if(ptrtostr != NULL) {
   return foundat;
  }
  else {
    return -1;
  }
}
