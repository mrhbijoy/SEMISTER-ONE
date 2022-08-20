#include<stdio.h>
int main() {
  int a, b, c;
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);
  c = a;
  a = b;
  b = c;

  printf("\nAfter swapping, first number = %d\n", a);
  printf("After swapping, second number = %d", b);
  return 0;
}