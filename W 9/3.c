// WAP to calculate x power y in double

#include <stdio.h>

double calcPower(int x, int y)
{
   double res = 1;
   int i, j;

   if (y < 0)
      j = -1 * y;
   else
      j = y;

   for (i = 0; i < j; i++)
      res *= x;

   if (y < 0)
      return (double)1 / res;
   else
      return res;
}

int main()
{
   int x, y;

   printf("Enter two numbers\n");
   scanf("%d%d", &x, &y);

   if (x == 0 && y <= 0)
   {
      printf("%d power %d is mathematically invalid\n", x, y);
      return 0;
   }

   printf("%d power %d = %lf\n", x, y, calcPower(x, y));

   return 0;
}
