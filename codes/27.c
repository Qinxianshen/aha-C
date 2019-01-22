#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a,b,c;
	int i,t,j;
	int d[2];
	scanf("%c",&a);
	scanf("%c",&b);
	scanf("%c",&c);
	d[0]=a;
	d[1]=b;
	d[2]=c;
    for (j=0;j<2;j++)
		for (i=0;i<3;i++)
		{
			if (d[i]>d[i+1])
				{
					t=d[i];
					d[i]=d[i+1];
					d[i+1]=t;
				}
		
		}
	
		printf ("%c%c%c",d[0],d[1],d[2]);
	system("pause");
	return 0;
}
/*#include<stdio.h> 

int main() 

{ 

    char a,b,c; 

while(scanf(" %c%c%c",&a,&b,&c)!=EOF) //加个空格，第二个也一样 

{ 

if((a<b)&&(b<c)) 

printf("%c %c %c",a,b,c); 

if((a<c)&&(c<b)) 

printf("%c %c %c",a,c,b); 

if((b<a)&&(a<c)) 

printf("%c %c %c",b,a,c); 

if((b<c)&&(c<a)) 

printf("%c %c %c",b,c,a); 

if((c<a)&&(a<b)) 

printf("%c %c %c",c,a,b); 

if((c<b)&&(b<a)) 

printf("%c %c %c",c,b,a); 

} 

return 0; 

}*/
