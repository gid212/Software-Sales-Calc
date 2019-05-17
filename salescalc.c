#include <stdio.h>

#define PRICE 100.00

/* this program will calculate software sales */

int main(void)
{
  int quantity;
  float total, discount, discperc;

  printf("Enter the number of packages ordered: ");
  scanf("%d", &quantity);
  if (0 <= quantity && quantity <= 9) discperc = 0.0;
  else if (10 <= quantity && quantity <= 19) discperc = .1;
  else if (20 <= quantity && quantity <= 49) discperc = .2;
  else if (50 <= quantity && quantity <= 99) discperc = .3;
  else if (100 <= quantity) discperc = .4;
  discount = PRICE*quantity*discperc;
  total = PRICE*quantity - discount;
  printf("The total cost of purchase was $%.2f with a discount of $%.2f\n", total, discount);
  return 0;
}
