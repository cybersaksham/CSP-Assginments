// WAP to print sum of first n natural numbers

#include <stdio.h>

int addNums(int n)
{
   if (n == 1)
      return 1;
   else
      return addNums(n - 1) + n;
}

int main()
{
   int n;

   printf("Enter n = ");
   scanf("%d", &n);

   while (n <= 0)
   {
      printf("Enter again = ");
      scanf("%d", &n);
   }

   printf("Sum of first %d numbers is %d\n", n, addNums(n));

   return 0;
}
