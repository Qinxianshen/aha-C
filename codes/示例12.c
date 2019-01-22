#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a,n,i;
    n=sqrt(a);
    
    scanf("%d",&a);
    if (a==1)
		printf("这个数不是素数");
    else
		for(i=2;i<n;i++)
		{
			if(a%i != 0)
			{	
				printf("这个数是素数");
				break;
			}
			else
				printf("%d能被%d整除\n",a,i);
		}
	system("pause");
	return 0;
}
