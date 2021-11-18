// WAP to print fibonacci using recursion

#include <stdio.h>

int A[100];

int fibonacci(int n)
{
   int res;

   if (n <= 2)
   {
      res = 1;
   }
   else
   {
      res = fibonacci(n - 2) + fibonacci(n - 1);
   }

   if (A[n - 1] == 0)
      printf("%d ", res);
   A[n - 1] = res;
   return res;
}

int main()
{
   int n;

   printf("Enter number of elements in fibonacci = ");
   scanf("%d", &n);

   while (n <= 0)
   {
      printf("Enter again = ");
      scanf("%d", &n);
   }

   fibonacci(n);
   printf("\n");

   return 0;
}
