#include<stdio.h>

int main(int argc, char const *argv[]) {
  double pettycash;
  double grandtotal;

  pettycash = 10.5;
  grandtotal = 500.5;

  printf("pettycash = %.2f\n", pettycash);
  printf("grandtotal = %.2f\n", grandtotal);

  pettycash = 100.5;
  printf("pettycash = %.2f\n", pettycash);
  printf("grandtotal = %.2f\n", grandtotal);

  return 0;
}
