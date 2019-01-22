#include <stdio.h>
#include <stdlib.h>
double min(double a,double b)
{	double t;
	/*if(a>b)
		t=b;
    else
		t=a;
    return t;*/
    t = a>b?b:a;
    return t;
}
int main()
{
	double a,b,t;
    scanf("%lf%lf",&a,&b);
    t=min(a,b);
    printf("%lf",t);
	
	return 0;
}
