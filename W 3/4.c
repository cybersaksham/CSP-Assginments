// WAP to calculate area of circle

#include <stdio.h>
#define PI 3.14

int main()
{
   int a;
   printf("Enter radius of circle = ");
   scanf("%d", &a);

   float area = PI * a * a;
   printf("Area = %f\n", area);

   return 0;
}
