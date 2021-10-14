// Print roll no, marks in 5 subjects, total, percentage & result for a student

#include <stdio.h>

int main()
{
   int id;
   float per, a, b, c, d, e, total;

   printf("Enter roll no = ");
   scanf("%d", &id);

   printf("Enter marks in 5 subjects out of 100\n");
   scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

   total = a + b + c + d + e;
   per = total / 5.0;

   printf("Roll no = %d\n", id);
   printf("Marks are = %f, %f, %f, %f, %f\n", a, b, c, d, e);
   printf("Total = %f\n", total);
   printf("Percentage = %f\n", per);

   if (per <= 30)
      printf("Result is fail\n");
   else
      printf("Result is pass\n");

   return 0;
}
