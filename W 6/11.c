// WAP to remove duplicates from an array

#include <stdio.h>

int main()
{
   int n, i, j, flag, b_size;

   printf("Enter number of elements\n");
   scanf("%d", &n);

   int A[100];
   for (i = 0; i < n; i++)
   {
      printf("Enter element %d = ", i + 1);
      scanf("%d", &A[i]);
   }

   int B[100];
   B[0] = A[0];
   b_size = 1;
   for (i = 0; i < n; i++)
   {
      flag = 0;
      for (j = 0; j < b_size; j++)
      {
         if (A[i] == B[j])
         {
            flag = 1;
            break;
         }
      }
      if (flag != 1)
      {
         B[b_size++] = A[i];
      }
   }

   printf("Final array is\n");
   for (i = 0; i < b_size; i++)
   {
      printf("%d ", B[i]);
   }
   printf("\n");

   return 0;
}
