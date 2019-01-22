#include<stdio.h>
double fun(int n,double x)
{   int i;
    double sum;
    for(i=0;i<n;i++)
        sum*=n;
        return sum;
}
int main()
{
    int n;
    double x,t;
    scanf("%d%lf",n,x);
    t=fun(n,x);
    printf("%.4%lf",&t);
    system("pause");
    return 0;
}
