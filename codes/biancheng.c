#include <stdio.h>
#include <math.h>
#define PI 3.14
/*int main()
{
	double x1,x2,x3,x4,d,d1;
	scanf("%lf%lf",&x1,&x2);
	scanf("%lf%lf",&x3,&x4);
	d=(x1-x3)*(x1-x3)+(x2-x4)*(x2-x4);
	d1=sqrt(d);
	printf("%lf",d1);
	
	system("pause");
	
	return 0;
	
	
	
}*/
//----------------------------
/* int main()
{	const double PI  = 3.14;
	double r,v;
	printf("请输入球的半径：\n");
	scanf("%lf",&r);
	v=PI*(4.0/3.0)*r*r*r;
	printf("%.3lf",v);
	
	system("pause");
	
	return 0;
	
	
	
	
	
}*/
//--------------------------
/*int main()
{
	
		double d,h,s;
		scanf("%lf%lf",&d,&h);
		s=d*h/2;
		printf("%lf",s);
		
		
		
		system("pause");
		
		
		return 0;
		
	
}*/
//--------------------------
/*int main()
{
	double a,d,n,sn,an;
	scanf("%lf%lf%lf",&a,&d,&n);
	an=a+(n-1)*d;
	sn=(a+an)*n/2.0;
	printf("%lf",sn);
    system("pause");
	
	
	return 0;
 	
	
	
}*/
/*
int main()
{
	double d,h,m,M;
	scanf("%lf%lf%lf",&d,&h,&m);
	M=d*24*60+h*60+m;
	printf("分钟数是%lf",M);
	
	
	system("pause");
	return 0;
	
	
	
	
	
}
*/
//-------------------------------
int main()
{
	
	double r,s;
	int n;
	scanf("%lf%d",&r,&n);
	s=n*r*r*sin(2*PI/n)/2;
	printf("%lf",s);
	
	system("pause");
	
	return 0;
	
	
	
	
	
}
