// WAP to find roots of quadratic equation

#include <stdio.h>
#include <math.h>

int main()
{
   float a = 3, b = 8, c = 26;
   float squareD = (b * b) - (4 * a * c);

   float D;
   if (squareD < 0)
      D = sqrt(-1 * squareD);
   else
      D = sqrt(squareD);

   float first = ((-1 * b) / (2 * a));
   float second = (D / (2 * a));

   printf("Roots are : ");
   if (squareD < 0)
   {
      printf("%f + %fi, %f - %fi\n", first, second, first, second);
   }
   else
   {
      printf("%f, %f\n", first + second, first - second);
   }

   return 0;
}
