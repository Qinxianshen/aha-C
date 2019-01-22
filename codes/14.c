#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a=5,b=3;
    if((a<6)&&(a+=3<7))
		b+=7;
    printf("%d %d",a,b);
  
	system("pause");
	return 0;
}
