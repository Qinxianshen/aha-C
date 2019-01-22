#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b;
    a=8;
    b=7;
    a=(a-- == b++)? a%2 : a/3 ;
    printf("a=%d b=%d\n",a,b);
	system("pause");
	return 0;
}
