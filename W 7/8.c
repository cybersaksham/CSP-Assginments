// WAP to print prime numbers from 1 to 100

#include <stdio.h>

int main()
{
   int start = 2, end = 99, i = 0, j = 0, flag;

   for (i = start; i <= end; i++)
   {
      flag = 0;
      for (j = 2; j <= i / 2; j++)
      {
         if (i % j == 0)
         {
            flag = 1;
            break;
         }
      }
      if (flag == 0)
         printf("%d ", i);
   }
   printf("\n");

   return 0;
}
