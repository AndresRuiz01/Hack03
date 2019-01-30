/**
 * This program computes income taxes based on adjusted
 * gross income and a child tax credit.
 *
 */
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) {

  double agi = 0.0;
  char c = 'N';
  double tax = 0.0;
  double childCredit = 0.0;
  double totalTax = 0.0;
  int numChildren = 0;

  printf("Please enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);

  printf("Do you have any children? (Y) or (N)? ");
  getchar(); //remove the endline character
  c = getchar();

  if(c == 'y' || c == 'Y') {
    printf("How many children do you have? ");
    scanf("%d", &numChildren);
  }

  //TODO: compute the tax, child credit, and total tax:
  if (agi < 17000) {
    tax = agi * .1;
  }
  else if (agi < 69000) {
    tax = (agi - 17000) * .15 + 1700;
  }
  else if (agi < 139350) {
    tax = (agi - 69000) * .25 + 9500;
  }
  else if (agi < 212300) {
    tax = (agi - 139350) * .28 + 27087.50;
  }
  else if (agi < 379150) {
    tax = (agi - 212300) * .33 + 47513.50;
  }
  else {
    tax = (agi - 379150) * .35 + 102574;
  }

  childCredit = numChildren * 1000;

  totalTax = tax - childCredit;
  if (totalTax < 0) {
    totalTax = 0;
  }

  printf("AGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("Total Tax:    $%10.2f\n", totalTax);

  return 0;
}
