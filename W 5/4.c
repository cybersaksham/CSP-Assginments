// Find a charcater is vowel or consonant by switch case

#include <stdio.h>

int main()
{
   int a, isVowel = 0;

   printf("Enter a character = ");
   scanf("%c", &a);

   switch (a)
   {
   case 97:
      isVowel = 1;
      break;
   case 101:
      isVowel = 1;
      break;
   case 105:
      isVowel = 1;
      break;
   case 111:
      isVowel = 1;
      break;
   case 117:
      isVowel = 1;
      break;
   case 65:
      isVowel = 1;
      break;
   case 69:
      isVowel = 1;
      break;
   case 73:
      isVowel = 1;
      break;
   case 79:
      isVowel = 1;
      break;
   case 85:
      isVowel = 1;
      break;
   default:
      isVowel = 0;
      break;
   }

   switch (isVowel)
   {
   case 0:
      printf("%c is consonant\n", a);
      break;
   case 1:
      printf("%c is vowel\n", a);
      break;
   }

   return 0;
}
