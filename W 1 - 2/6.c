// WAP to print sum & average of 5 numbers
#include <stdio.h>

int main()
{
   // Taking Input
   int a, b, c, d, e;
   printf("Enter 5 numbers\n");
   scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

   // Calculating sum & average
   int sum = a + b + c + d + e;
   float avg = sum / (float)5;

   // Printing
   printf("The sum is %d\n", sum);
   printf("The average is %f\n", avg);

   return 0;
}
