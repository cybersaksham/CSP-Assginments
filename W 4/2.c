// WAP to perform binary operations on 2 numbers

#include <stdio.h>

int main()
{
   int a, b;

   printf("Enter 2 numbers\n");
   scanf("%d%d", &a, &b);

   printf("%d & %d = %d\n", a, b, a & b);
   printf("%d | %d = %d\n", a, b, a | b);
   printf("%d ^ %d = %d\n", a, b, a ^ b);
   printf("%d << 2 = %d\n", a, a << 2);
   printf("%d >> 2 = %d\n", a, a >> 2);

   return 0;
}
