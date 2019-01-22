#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
    int i,n;
    char ch;
    fp=fopen("d:\\a.txt","w");
	ch=getchar();
    while(ch!=EOF){
		fputc(ch,fp);
        ch=getchar();
    }
    fclose(fp);
    fp=fopen("d:\\a.txt","r");
    ch=fgetc(fp);
    while(ch!=EOF)
    {
    if(ch>='a'&&ch<='z')
		ch=ch-32;
    if(ch>='0'&&ch<='8')
		ch++;
    if(ch=='9')
		ch=ch-9;
    printf("%c",ch);
    ch=fgetc(fp);
    }
    
    fclose(fp);

	system("pause");
	return 0;
}
