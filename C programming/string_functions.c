#include<stdio.h>
#include<string.h>

#define MAXLEN 200

char mystring[] = "This is a string which contains my name - Angshuman";
char tens[] = "10   20  30  40  50";
char nums[] = "12345678901234567890";

char message1[MAXLEN] = "Result_1: ";
char message2[MAXLEN] = "Result_2: ";
char myotherstr[6];

void showstring() {
  printf("\n%s\n",mystring);
  printf("%s\n%s\n",tens,nums);
}

void searchstring(char searchstr[]) {
  char *ptrtostr;
  int foundat;
  ptrtostr = strstr(mystring,searchstr);
  foundat = (int) ((ptrtostr - mystring) + 1);
  if(ptrtostr != NULL) {
    printf("\n %s found at postion %d\n",searchstr,foundat);
  }
  else {
    printf("\n%s not found\n",searchstr);
  }
}

void copystring() {
  //Many mordern c11 compilers provide safer string functions ending _s
  // This is an example showing strncpy_s but this is not suppported by all compilers
  /*
  *strncpy_s(myotherstr,6,"Easter",4);
  *printf("\n strncpy_s: copied this string :",myotherstr);
  */
  myotherstr[0] = 0;
  strncpy(myotherstr,"Easter",4);
  printf("\n strncpy: copied this string : %s",myotherstr);
}

void concatstring() {
  strcat(message1,"Easter");
  printf("\nstrcat: %s",message1);
  strncat(message2,"Easeter",4);
  printf("\n strncat: %s\n",message2);
}

int main(int argc, char const *argv[]) {
  printf("Length of mystring = %ld",strlen(mystring));
  printf("\n Length of 'Hello' = %ld",strlen("Hello"));
    showstring();
    searchstring("my name");
    searchstring("This");
    searchstring("Easter");
    copystring();
    concatstring();
  return 0;
}
