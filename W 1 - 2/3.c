// WAP to swap 2 numbers with use of third variable

#include <stdio.h>

int main()
{
   // Taking input for 2 variables
   int a, b;
   printf("Enter 2 numbers\n");
   scanf("%d%d", &a, &b);

   // Before Swapping
   printf("Before Swapping\n");
   printf("%d %d\n", a, b);

   // Swapping
   int temp = a;
   a = b;
   b = temp;

   // After Swapping
   printf("After Swapping\n");
   printf("%d %d\n", a, b);

   return 0;
}
