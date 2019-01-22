#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a;
	scanf("%c",&a);
	
	if (a>'a' && a < 'z');
	{	
		printf("%c",toupper(a));
	}
	
	if (a>'A' && a < 'Z');
    {	
		printf("%c",tolower(a));
	}
	system("pause");
	return 0;
}
