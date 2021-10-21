// WAP to insert an element in an array

#include <stdio.h>

int main()
{
   int n, i, index, key;

   printf("Enter number of elements\n");
   scanf("%d", &n);

   int A[100];
   for (i = 0; i < n; i++)
   {
      printf("Enter element %d = ", i + 1);
      scanf("%d", &A[i]);
   }

   printf("Enter index at which you want to insert = ");
   scanf("%d", &index);

   while (index < 0 || index > n)
   {
      printf("Invalid index. Enter again = ");
      scanf("%d", &index);
   }

   printf("Enter value which you want to insert = ");
   scanf("%d", &key);

   for (i = n; i > index; i--)
      A[i] = A[i - 1];
   A[index] = key;

   printf("Final array is\n");
   for (i = 0; i <= n; i++)
   {
      printf("%d ", A[i]);
   }
   printf("\n");

   return 0;
}
