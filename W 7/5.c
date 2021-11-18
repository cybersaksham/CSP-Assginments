// WAP to print second maximum number in given numbers

#include <stdio.h>

int main()
{
   int n, i, m1, m2;

   printf("Enter total number of numbers (minimum 2) = ");
   scanf("%d", &n);

   while (n < 2)
   {
      printf("Enter minimum 2 = ");
      scanf("%d", &n);
   }

   int A[n];
   for (i = 0; i < n; i++)
   {
      printf("Enter number %d = ", i + 1);
      scanf("%d", &A[i]);
   }

   if (A[0] > A[1])
   {
      m1 = A[0];
      m2 = A[1];
   }
   else
   {
      m1 = A[1];
      m2 = A[0];
   }

   for (i = 2; i < n; i++)
   {
      if (A[i] > m1)
      {
         m2 = m1;
         m1 = A[i];
      }
      else if (A[i] > m2)
      {
         m2 = A[i];
      }
   }

   printf("Second maximum number is %d\n", m2);

   return 0;
}
