#include<stdio.h>
int main()
{
	
	char a;
	scanf("%c",&a);
	
	if (a>'a' && a < 'z');
	{
		printf("%c",a+32);
	}
	
	if (a>'A' && a < 'Z');
    {
		printf("%c",a-32);
	}
    system("pause");
	return 0;
}
