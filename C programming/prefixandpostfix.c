#include<stdio.h>

void showPrefixandPostfixops() {

  int num1,num2;
  printf("\nPrefix and Postfix operators... (num = 10)");
  num1 = 10;
  num2 = num1++; //num2 = 10 num1 = 11

  printf("\n num2 = num1++;  so num2 = %d and num1 = %d",num2,num1);

  num1 = 10;
  num2 = ++num1;
  printf("\n num2 = ++num1; so num2 = %d and num1 = %d \n",num2,num1);
}
int main(int argc, char const *argv[]) {
  showPrefixandPostfixops();
  return 0;
}
