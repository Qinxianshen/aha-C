#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a,n,i;
    n=sqrt(a);
    
    scanf("%d",&a);
    if (a==1)
		printf("�������������");
    else
		for(i=2;i<n;i++)
		{
			if(a%i != 0)
			{	
				printf("�����������");
				break;
			}
			else
				printf("%d�ܱ�%d����\n",a,i);
		}
	system("pause");
	return 0;
}
