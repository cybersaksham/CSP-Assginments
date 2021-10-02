// WAP to find sum of individual digits of a number

#include <stdio.h>

int main()
{
   int n, sum = 0;
   printf("Enter number = ");
   scanf("%d", &n);

   for (; n > 0; n /= 10)
   {
      sum += n % 10;
   }

   printf("Sum of all individual digits is %d\n", sum);

   return 0;
}
