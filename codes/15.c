#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a=5,b=6,t;
    t=(a>6? a+=3:b--);
    
	
    printf("%d %d %d",a,b,t);
  
	system("pause");
	return 0;
}
