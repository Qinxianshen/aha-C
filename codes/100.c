#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x=2,y=3;
    x*=y+4;        // ¾ÍÊÇ x=(y+4)*x
    printf("%d   %d \n",x,y);
    x/=y=5;
    printf("%d   %d\n",x,y);
    x-=y%2;
    printf("%d    %d",x,y);
	system("pause");
	return 0;
}
