#include <stdio.h>

int main() {
  float p, r, t, interest;
  
  printf("Enter the principal amount: ");
  scanf("%f", &p);
  
  printf("Enter the interest rate: ");
  scanf("%f", &r);
  
  printf("Enter the time period (in years): ");
  scanf("%f", &t);
  
  interest = (p * r * t) / 100;
  
  printf("The simple interest is: %.2f\n", interest);
  
  return 0;
}
