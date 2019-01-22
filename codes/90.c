#include <stdio.h>
#include <stdlib.h>
int pan(int a)
{	
    int i,s;
	for(i=1;i<a;i++)
    {
		if(a%i==0)
			s+=i;
	}
	if(s==a)
		return 1;
    else
		return 0;

}
int main()
{
	int a,s;
    scanf("%d",&a);
    s=pan(a);
    if(s==1)
		printf("yes");
    else
		printf("no");
	system("pause");
	return 0;
}
