// WAP to find answer of given code containing post & pre increment operators

#include <stdio.h>

int main()
{
   int x, y = 6, z = 0, t;

   x = y--;       // x = 6, y = 5
   x = x++;       // x = 7
   x = ++y;       // x = 6, y = 6
   t = z++ + ++y; // t = 7, z = 1, y = 7
   t += 8;        // t = 15
   t = z++ + ++z; // t = 4, z = 3
   // x = 6, y = 7, z = 3, t = 4

   printf("x = %d\n", x);
   printf("y = %d\n", y);
   printf("z = %d\n", z);
   printf("t = %d\n", t);

   return 0;
}
