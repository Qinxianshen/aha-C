#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,maxn,minn,t;
    int sum=0 ;
	printf("请输入两个整数。");
    printf("整数A:");
    scanf("%d",&a);
	printf("整数B:");
    scanf("%d",&b);
    maxn=(a>b)?a:b;
    minn=(a<b)?a:b;
    t=(a<b)?a:b;
	while(t<=maxn)
    {
		sum+=t;
        t++;
    }
       printf("大于等于%d小于等于%d的整数的和为%d",minn,maxn,sum);
	system("pause");
	return 0;
}
