#include<stdio.h>

#define STRLEN 5

/*
int readln(char s[], int maxlen) {
  int len_s;
  fgets(s,maxlen,stdin);
  len_s = strlen(S);
  if(s[len_s - 1] == '\n') {
    s[len_s - 1] = '\0';
    len_s -= 1;
  }

  rewind(stdin); //This flushes the keyboard buffer.
  return len_s;
}

*/

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

int main(int argc, char const *argv[]) {
  char firstname[STRLEN];
  char lastname[STRLEN];
  printf("Enter your firstname :");
  readln(firstname,STRLEN);
  printf("Enter your lastname :");
  readln(lastname,STRLEN);

  printf("Hello, %s %s.\n",firstname,lastname);
  return 0;
}
