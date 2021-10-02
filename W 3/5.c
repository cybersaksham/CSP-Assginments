// WAP to convert celsius to fahrenheit & vice-versa

#include <stdio.h>

int main()
{
   float temp, res;
   char tempType;

   printf("Enter temperature = ");
   scanf("%f", &temp);
   getchar();
   printf("Enter c for celsius & f for fahrenheit = ");
   scanf("%c", &tempType);

   if (tempType == 'c')
   {
      res = (temp * 1.8) + 32;
      printf("Fahrenheit = %f\n", res);
   }
   else if (tempType == 'f')
   {
      res = (temp - 32) / 1.8;
      printf("Celsius = %f\n", res);
   }

   return 0;
}
