// WAP to print sum of all non negative numbers in array by goto statements

#include <stdio.h>

int main()
{
   int A[10], i = 0, sum = 0;

   for (i = 0; i < 10; i++)
   {
      printf("Enter number %d = ", i + 1);
      scanf("%d", &A[i]);
   }

   i = 0;
startLoop:
   if (A[i] >= 0)
      sum += A[i];
   i = i + 1;
   if (i < 10)
      goto startLoop;
   else
      goto endLoop;

endLoop:
   printf("Sum is %d\n", sum);

   return 0;
}
