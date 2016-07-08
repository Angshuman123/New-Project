#include<stdio.h>

void sayhello() {
  printf("Hello\n");
}

void greet(char aName[]) {
  printf("Hello %s \n",aName);
}

int add(int num1, int num2) {
  return num1+num2;
}

double divide(int num1,int num2) {
  return num1/num2;
}

int main(int argc, char const *argv[]) {
  double result;
  int n1;
  int n2;
  int total;

  n1 = 10;
  n2 = 3;

  sayhello();
  greet("Fred");

  total = add(n1,n2);
  printf("%d + %d = %d \n",n1,n2,total);
  result = divide(n1,n2);
  printf("%d / %d = %f \n",n1,n2,result);
  return 0;
}
