#include <stdio.h>
#include <stdlib.h>
int main()
{	
    int a,b,c,s1,s2,s3;
	scanf("%d%d%d",&a,&b,&c);
    s1=(a>b)? a:b;
    s1=(s1>c)? s1:c;
    s2=(a<b)? a:b;
    s2=(s2<c)? s2:c;
    s3=a+b+c-s1-s2;
    printf("abc由大到小输出是%d  %d   %d",s1,s3,s2);
	system("pause");
	return 0;
}
