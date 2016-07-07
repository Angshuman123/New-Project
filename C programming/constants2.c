#include<stdio.h>

int main(int argc, char const *argv[]) {
  #define TAXRATE_DEFINED 0.175
  const double TAXRATE_CONST = 0.175;

  double subtotal;
  double tax;
  double grandtotal;
  double taxrate;

  taxrate = 0.175;
  subtotal = 200;
  taxrate = 0.2;        //redefined a variable
  tax = subtotal * taxrate;
  grandtotal = subtotal + tax;

  printf("(taxrate is %.2f) The tax on %.2f is %.2f, so the grandtotal is %.2f\n",taxrate,tax,subtotal,grandtotal);

  subtotal = 200;
  #define TAXRATE_DEFINED 0.2     //redefined a #define 'cosntant'
  tax = subtotal + TAXRATE_DEFINED;
  grandtotal = subtotal + tax;

  printf("(taxrate is %.3f) The tax on %.2f is %.2f, so the grandtotal is %.2f.\n",TAXRATE_DEFINED,tax,subtotal,grandtotal);

  subtotal = 200;
  //TAXRATE_CONST = 0.2;      //cannot refine a true constant
  tax = subtotal * TAXRATE_CONST;
  grandtotal = subtotal + tax;

  printf("(taxrate is %.3f) The tax on %.2f is %.2f, so the grandtotal is %.2f.\n",TAXRATE_CONST,tax,subtotal,grandtotal);


  return 0;
}
