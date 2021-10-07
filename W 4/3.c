// WAP to print simple interest by typecasting

#include <stdio.h>

int main()
{
   int p, r, n;
   float i;

   printf("Enter p = ");
   scanf("%d", &p);
   printf("Enter r = ");
   scanf("%d", &r);
   printf("Enter n = ");
   scanf("%d", &n);

   i = (p * r * n) / (float)(100);
   printf("Interest is %f\n", i);

   return 0;
}
