#include<stdio.h>
#include<ctype.h>
#include<string.h>

char mystring[] = "This is a string. It contains some letters \"sdf\" and numerics like \"1234\". It also contains my name which is Angshuman.";

void chartype() {
  int i;
  char c;
  int numDigits = 0;
  int numLetters = 0;
  int numUpCase = 0;
  int numLowCase = 0;
  int numSpaces = 0;
  int numPunct = 0;
  int numUnknown = 0;
  int lengthOfStr = 0;
  lengthOfStr = strlen(mystring);

  for(i = 0; i < lengthOfStr; i++) {
    c = mystring[i];
    if(isalpha(c)) {
      numLetters++;
      if(isupper(c)) {
        printf("%c [uppercase] \n",c);
        numUpCase++;
      }else {
        printf("%c [lowercase] \n",c);
        numLowCase++;
      }
    } else if(isdigit(c)){
        printf("%c [digit]\n",c);
        numDigits++;
    } else if(ispunct(c)) {
      printf("%c [punctuation]\n",c);
      numPunct++;
    } else if(isblank(c)) {
      printf("%c [blank]\n",c);
      numSpaces++;
    } else {
      printf("%c [unknown]\n",c);
      numUnknown++;
    }
  }

  printf("The string contains %d characters.%d are letters. %d are uppercase. %d are lowercase.",lengthOfStr,numLetters,numUpCase,numLowCase);
  printf("\n %d are digits. %d are spaces. %d are punctuation. %d are unknown.",numDigits,numSpaces,numPunct,numUnknown);
}

int main(int argc,char const *argv[]) {
  chartype();
  return 0;
}
