#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,maxn,minn,t;
    int sum=0 ;
	printf("����������������");
    printf("����A:");
    scanf("%d",&a);
	printf("����B:");
    scanf("%d",&b);
    maxn=(a>b)?a:b;
    minn=(a<b)?a:b;
    t=(a<b)?a:b;
	while(t<=maxn)
    {
		sum+=t;
        t++;
    }
       printf("���ڵ���%dС�ڵ���%d�������ĺ�Ϊ%d",minn,maxn,sum);
	system("pause");
	return 0;
}
