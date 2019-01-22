#include <stdio.h>
#include <ctype.h>

int main()
{
   int i = 0;
   char c;
   char str[] = "abcdefg";
   
   while(str[i])
   {
      putchar (toupper(str[i]));
      i++;
   }
   system("pause");
  return(0);
}
