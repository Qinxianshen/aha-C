#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
double Tingji (double r,double h)
{
	double v;
	v=PI*r*r*h;
    return v;

}
int main()
{
	double r,h,v; 
    scanf("%lf%lf",r,h);
    v=Tingji(r,h);
	return 0;
}
