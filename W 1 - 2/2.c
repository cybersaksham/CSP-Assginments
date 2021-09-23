// WAP to perform arithmetic operations on 2 numbers

#include <stdio.h>

int main()
{
   // Taking input for 2 numbers
   int a, b;
   printf("Enter 2 numbers\n");
   scanf("%d%d", &a, &b);

   // Arithmetic Operations
   printf("Sum of %d and %d is %d\n", a, b, a + b);
   printf("Substraction of %d and %d is %d\n", a, b, a - b);
   printf("Multiplication of %d and %d is %d\n", a, b, a * b);
   if (b == 0)
      printf("Denominator cannot be zero");
   else
      printf("Division of %d and %d is %f\n", a, b, (float)a / b);
   return 0;
}
