// WAP to print total size of all variables in a given program

#include <stdio.h>

int main()
{
   int x, y;
   float z;
   double a, b;
   char c;

   int size_ = sizeof(x) + sizeof(y) + sizeof(z) + sizeof(a) + sizeof(b) + sizeof(c);

   printf("Total size is %d\n", size_);

   return 0;
}
