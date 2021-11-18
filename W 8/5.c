// WAP to implement insertion sort

#include <stdio.h>

int main()
{
   int n, i, j, tmp, count, counter;

   printf("Enter no of elements = ");
   scanf("%d", &n);

   while (n <= 0)
   {
      printf("Enter again = ");
      scanf("%d", &n);
   }

   int A[n];
   printf("Enter %d elements of array\n", n);
   for (i = 0; i < n; i++)
      scanf("%d", &A[i]);

   for (i = 1; i < n; i++)
   {
      count = A[i];
      counter = i;
      for (j = i - 1; j >= 0; j--)
      {
         if (A[j] > count)
         {
            tmp = A[j];
            A[j] = count;
            A[counter] = tmp;
            counter = j;
         }
         else
            break;
      }
   }

   printf("Final array is\n");
   for (i = 0; i < n; i++)
      printf("%d ", A[i]);
   printf("\n");

   return 0;
}
