// WAP to take input for 5 numbers & print them
#include <stdio.h>

int main()
{
   // Taking Input
   int a, b, c, d, e;
   printf("Enter 5 numbers\n");
   scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

   // Printing Numbers
   printf("The numbers are\n");
   printf("%d,%d,%d,%d,%d\n", a, b, c, d, e);

   return 0;
}
