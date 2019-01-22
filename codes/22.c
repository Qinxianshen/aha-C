#include <stdio.h>
#include <stdlib.h>
double min(double a,double b,double c)
{
		double t;
	if(a>b)
		t=b;
    if(t>c)
		t=c;

    return t;
}
double max(double a,double b,double c)
{
	double t;
	if(a<b)
		t=b;
    if(t<c)
		t=c;
    return t;
}
int main()
{
	char a,b,c,K,N,J;
    int sum,A,B,C,n,j,k;
    A='a';
    B='b';
    C='c';
    scanf("%d",&n);
    scanf("%c%c%c",&a,&b,&c);
	sum=a+b+c;
    k=min(A,B,C);
    j=max(A,B,C);
    n=sum-j-k;
    K=char(k);N=char(n);J=char(j);
    printf("%c%c%c",K,N,J);
	system("pause");
	return 0;
}
