// WAP to swap 2 numbers without using third variable
#include <stdio.h>

int main()
{
   // Taking Input
   int a, b;
   printf("Enter 2 numbers\n");
   scanf("%d%d", &a, &b);

   // Before Swapping
   printf("Before Swapping\n");
   printf("%d %d\n", a, b);

   // Swapping
   b = a + b;
   a = b - a;
   b = b - a;

   // After Swapping
   printf("After Swapping\n");
   printf("%d %d\n", a, b);

   return 0;
}
