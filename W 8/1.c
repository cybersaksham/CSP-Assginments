// WAP to implement binary search

#include <stdio.h>

int binarySearch(int low, int high, int A[], int k)
{
   if (low > high)
      return -1;

   int mid = low + (high - low) / 2;

   if (k == A[mid])
      return mid;
   else if (k < A[mid])
      return binarySearch(low, mid - 1, A, k);
   else
      return binarySearch(mid + 1, high, A, k);
}

int main()
{
   int n, low, high, k, res, i = 0;

   printf("Enter no of elements = ");
   scanf("%d", &n);

   while (n <= 0)
   {
      printf("Enter again = ");
      scanf("%d", &n);
   }

   int A[n];
   printf("Enter %d elements in ascending order\n", n);
   for (i = 0; i < n; i++)
      scanf("%d", &A[i]);

   printf("Enter element to search = ");
   scanf("%d", &k);

   low = 0;
   high = n;
   res = binarySearch(low, high, A, k);

   if (res == -1)
      printf("%d not found\n", k);
   else
      printf("Index of %d is %d\n", k, res);

   return 0;
}
