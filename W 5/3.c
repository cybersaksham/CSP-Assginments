// Perform add, subtract, multiply, division modulo, power on 2 numbers using switch case

#include <stdio.h>
#include <math.h>

int main()
{
   int a, b, c;
   int res;

   printf("Enter 2 numbers\n");
   scanf("%d%d", &a, &b);

   printf("Enter 1 for add, 2 for subtract, 3 for multiply, 4 for divide, 5 for modulo, 6 for power\n");
   scanf("%d", &c);

   while (c > 6 || c < 1)
   {
      printf("Enter again = ");
      scanf("%d", &c);
   }

   switch (c)
   {
   case 1:
      res = a + b;
      break;
   case 2:
      res = a - b;
      break;
   case 3:
      res = a * b;
      break;
   case 4:
      res = a / b;
      break;
   case 5:
      res = a % b;
      break;
   case 6:
      res = pow(a, b);
      break;
   }

   printf("Result = %d\n", res);

   return 0;
}
