#include<stdio.h>

void flush_input() {
  int ch;
  while((ch = getchar()) != '\n' && ch !=EOF);
}

void getinput_with_gets() {
  char firstname[5];
  char lastname[5];
  printf("Enter your first name :");
  gets(firstname);
  printf("Enter your last name:");
  gets(lastname);
  printf("Hello, %s %s \n",firstname,lastname);
}

void getinput_with_fgets() {
  char firstname[5];
  char lastname[5];
  printf("Enter your firstname :");
  fgets(firstname,5,stdin);
  printf("Enter your lastname :");
  // fflush(stdin); //This may not work
  flush_input();
  fgets(lastname,5,stdin);
  flush_input();
  printf("Hello, %s %s \n",firstname,lastname);

}
 int main(int argc, char const *argv[]) {
   // getinput_with_gets();
   getinput_with_fgets();
   return 0;
 }
