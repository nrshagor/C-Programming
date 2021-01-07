#include <stdio.h>
#include <string.h>
int main()
{
   char a[100], b[100];

   printf("Enter a string\n");
   gets(a);

   printf("Enter a string\n");
   gets(b);

   if (strcmp(a,b) == 0)
      printf("first string is equal the second string .\n");
   else if (strcmp(a,b) == -1)
      printf("first string is less than the second string.\n");
      else
        printf("first string is greater than the second string.\n");

   return 0;
}
