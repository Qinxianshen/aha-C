#include <stdio.h>
#include <math.h>

int main ()
{
   int a, b;
   a = 1234;
   b = -344;
  
   printf("The absolute value of %d is %lf\n", a, fabs(a));
   printf("The absolute value of %d is %lf", b, fabs(b));
   
   system("pause");
   return(0);
}
