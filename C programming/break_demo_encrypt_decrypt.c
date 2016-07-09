#include<stdio.h>

char message[50] = "Hello World! Goodbye.";
char str[50];

void encrypt() {
  int i;
  char c;
  for(i = 0; i < 50; i++) {
    c = message[i];
    printf("%c ", c);
    if(c == ' ') {
      str[i] = c;
      continue;
    }
    if(c == '!') {
      str[i] = '\0';
      break;
    }
    str[i] = message[i] + 1;
    printf("%c ",str[i]);
  }
  printf("\n Encrypted message is : %s\n", str);
}

void decrypt() {
  int i;
  char c;
  for(i = 0; i < 50; i++) {
    c = str[i];
    if(c == ' ') {
      continue;
    }
    if(c == '\0')
      break;
    str[i] = str[i] - 1;
  }

  printf("\n Decrypted message is: %s\n", str);
}
int main(int argc, char const *argv[]) {
  encrypt();
  decrypt();
  return 0;
}
