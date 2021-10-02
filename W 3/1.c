// WAP to calculate simple interest

#include <stdio.h>

int main()
{
   float p, r, t, res;

   printf("Enter p = ");
   scanf("%f", &p);

   printf("Enter r = ");
   scanf("%f", &r);

   printf("Enter t = ");
   scanf("%f", &t);

   res = (p * r * t) / 100;
   printf("Simple Interest is %f\n", res);

   return 0;
}
