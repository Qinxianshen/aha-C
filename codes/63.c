#include <stdio.h>
#include <stdlib.h>
int main()
{
	double c=5.8;
    int i=6;
    float a=1.2;
    i=(int)c+2;//ǿ������ת�����ı�c�����ֵ
    a+=3+c;
    printf("%f %lf %d",a,c,i);
	system("pause");
	return 0;
}
