// WAP to reverse 4 digit number

#include <stdio.h>

int main()
{
   int a, b = 0;
   printf("Enter a 4 digit number = ");
   scanf("%d", &a);

   while (a / 10 != 0)
   {
      b = (b * 10) + (a % 10);
      a /= 10;
   }
   b = (b * 10) + (a % 10);

   printf("Reversed number = %d\n", b);

   return 0;
}
