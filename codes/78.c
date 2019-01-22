#include<stdio.h>
#include<math.h>
int main()
{
    double sum=0;
    double n,j;
    j=pow(10.,7);
    for(n=1;n<=j;n++)
    {
        sum+=pow(-1.0,n+1)*(1.0/n);
    }
    printf("%lf",sum);

	system("pause");
    return 0;
}
