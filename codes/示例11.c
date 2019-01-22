#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n,sum;
    i = 2;
    sum = 0;
    for(n=0;n<=40;n+=3)
    {	
        sum+=i;
		i+=2;
        printf("%d\n",sum);
    }
	system("pause");
	return 0;
}
