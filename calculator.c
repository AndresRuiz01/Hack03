/**
 * This programs provides basic calculator functionality
 * allowing a user to enter two operands and to compute
 * various calculated values.
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv) {

  double a, b;
  int choice;
  double result;

  printf("Enter operand a: ");
  scanf("%lf", &a);

  printf("Enter operand b: ");
  scanf("%lf", &b);

  printf("Enter operation:\n");
  printf("(1) Addition\n");
  printf("(2) Subtraction\n");
  printf("(3) Multiplication\n");
  printf("(4) Division\n");
  printf("(5) Minimum\n");
  printf("(6) Power\n");
  printf("(7) log_a(b)\n");
  scanf("%d", &choice);

  //TODO: process the results here
  if (choice == 1) {
    result = a + b;
    printf("%lf + %lf = %lf\n", a, b, result);
  }
  if (choice == 2) {
    result = a - b;
    printf("%lf - %lf = %lf\n", a, b, result);
  }
  if (choice == 3) {
    result = a * b;
    printf("%lf x %lf = %lf\n", a, b, result);
  }
  if (choice == 4) {
    if (b == 0) {
      printf("Cannot divide a number by 0\n");
    }
    else {
      result = a / b;
      printf("%lf / %lf = %lf\n", a, b, result);
    }
  }
  if (choice == 5) {
    if (a > b) {
      result = b;
      printf("Minimum of %lf and %lf is %lf\n", a, b, result);
    }
    else {
      result = a;
      printf("Minimum of %lf and %lf is %lf\n", a, b, result);
    }
  }
  if (choice == 6) {
    result = pow(a,b);
    printf("a ^ b = %lf\n", result);
  }
  if (choice == 7) {
    result = log10(b) / log10(a);
    printf("Log base %lf of %lf is %lf\n", a, b, result);
  }
  return 0;
}
