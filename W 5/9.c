// Find grade according to percentage using switch case

#include <stdio.h>

int main()
{
   int per;

   printf("Enter percentage = ");
   scanf("%d", &per);

   printf("Grade is ");

   switch (per / 10)
   {
   case 9:
      printf("A+\n");
      break;
   case 8:
      printf("A\n");
      break;
   case 7:
      printf("B\n");
      break;
   case 6:
      printf("B+\n");
      break;
   case 5:
      printf("C+\n");
      break;
   case 4:
      printf("C\n");
      break;
   default:
      printf("F\n");
      break;
   }

   return 0;
}
