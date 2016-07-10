#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAXLEN 100

char greeting[MAXLEN];

char * string_function_dynamic(char *astring) {
  char *s = '\0';
  s = malloc(MAXLEN);
  s[0] = 0; // This is needed to initialize the buffer created my malloc
  strcat(s,"Hello ");
  strcat(s,astring);
  strcat(s,"\n");
  return s;
}

char * string_function(char astring[]) {
  strcat(greeting,"Hello ");
  strcat(greeting,astring);
  strcat(greeting,"\n");
  return greeting;
}

int main(int argc, char const *argv[]) {
  printf("%s",string_function("Fred"));
  printf("%s",string_function_dynamic("Angshuman"));
  return 0;
}
