#include<stdio.h>
char *lianjie(char *p1,char *p2);
int main(int arge,char *argv[])
{
    char s1[81],s2[81];
    char *t;
    scanf("%s",&s1[0]);
    scanf("%s",&s2[0]);
    t=lianjie(s1,s2);
    printf("%s",*t);
	system("pause");
    return 0;
}
char *lianjie(char *p1,char *p2)
{	
    /*char d[81];
    int i;
    for(i=0;c[i]!='0';i++)
    {
		
    }*/
    for(;*p1!='\0';p1++);
    for(;*p2!='\0';p2++,p1++)
    {
        *p1=*p2;
    }
    //*p1='\0';
    return p1;
    
	//return 
}
