// WAP to print largest element in an array

#include <stdio.h>

int main()
{
   int max, n, i;

   printf("Enter number of elements\n");
   scanf("%d", &n);

   int A[n];
   for (i = 0; i < n; i++)
   {
      printf("Enter element %d = ", i + 1);
      scanf("%d", &A[i]);
   }
   max = A[0];

   for (i = 1; i < n; i++)
   {
      if (A[i] > max)
         max = A[i];
   }

   printf("Largest element is %d\n", max);

   return 0;
}
