#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double Fangcheng(double a,double b)
{
	double x;
	x=-b/a;
    return x;
}
int main()
{
	double a,b,x;
    scanf("%lf%lf",&a,&b);
    if (a==0)
		printf("方程无解\n");
    else
	{	x=Fangcheng(a,b);
        printf("方程的解为x=%lf",x);
    }
	system("pause");
	return 0;
}
