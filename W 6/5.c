// WAP to print array in reverse order

#include <stdio.h>

int main()
{
   int n, i;

   printf("Enter number of elements\n");
   scanf("%d", &n);

   int A[n];
   for (i = 0; i < n; i++)
   {
      printf("Enter element %d = ", i + 1);
      scanf("%d", &A[i]);
   }

   printf("Array in reverse order is\n");
   for (i = n - 1; i >= 0; i--)
   {
      printf("%d ", A[i]);
   }
   printf("\n");

   return 0;
}
