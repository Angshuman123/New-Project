#include<stdio.h>

int main(int argc, char const *argv[]) {

  int subtotal;
  int tax;
  int grandtotal;
  double taxrate;

  taxrate = 0.175;
  subtotal = 200;

  tax = subtotal * taxrate;
  grandtotal = subtotal + tax;

  printf("The tax on %d is %d and the grandtotal is = %d.\n",subtotal,tax,grandtotal);
  return 0;
}
