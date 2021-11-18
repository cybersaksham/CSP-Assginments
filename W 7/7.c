// WAP to find a number is palindrome or not

#include <stdio.h>

int main()
{
   int n, sizeArr = 0, i = 0, j = 0, flag = 0;

   printf("Enter number = ");
   scanf("%d", &n);

   int A[10], tmp = n;
   while (tmp != 0)
   {
      A[sizeArr++] = tmp % 10;
      tmp /= 10;
   }

   i = 0, j = sizeArr - 1;
   while (i < j)
   {
      if (A[i] != A[j])
      {
         flag = 1;
         break;
      }
      i++;
      j--;
   }

   if (flag == 0)
      printf("Number is palindrome\n");
   else
      printf("Number is not palindrome\n");

   return 0;
}
