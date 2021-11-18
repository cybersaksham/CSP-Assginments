// WAP to print all leap years between 2 given years

#include <stdio.h>

int main()
{
   int start, end, i, j = 0;

   printf("Enter starting year = ");
   scanf("%d", &start);
   printf("Enter ending year = ");
   scanf("%d", &end);

   int leapYrs[end - start + 1];

   for (i = start; i < end + 1; i++)
   {
      if (i % 400 == 0)
         leapYrs[j++] = i;
      else if (i % 100 == 0)
         continue;
      else if (i % 4 == 0)
         leapYrs[j++] = i;
      else
         continue;
   }

   printf("Leap years are\n");
   for (i = 0; i < j; i++)
   {
      printf("%d ", leapYrs[i]);
   }
   printf("\n");

   return 0;
}
