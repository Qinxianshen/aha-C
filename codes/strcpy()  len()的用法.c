#include <stdio.h>
#include <string.h>

int main ()
{
   char str[50];
   int len;

   strcpy(str, "This is yiibai.com");

   len = strlen(str);
   printf("Length of |%s| is |%d|", str, len);
   system("pause");
   return(0);
}
