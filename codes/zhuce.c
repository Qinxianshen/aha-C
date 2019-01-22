#include<stdio.h>
#include<stdlib.h>
int main()
{

    FILE *fp,*fp2;
    char ch,ah;
    if(!(fp=fopen("D:\\zuce.txt","a")))
    {
        printf("error");
    }

    //ch=getchar();
    printf("请输入用户名(只能数字)：PS:Ctrl+z 退出输入\n");
    ch=getchar();
    while(ch!=EOF)
    {
        fputc(ch,fp);
        ch=getchar();
        //printf("%c",ch);
    }
    fclose(fp);
    if(!(fp2=fopen("D:\\xingxi2.txt","a")))
    {
        printf("error");
    }
    //ch=getchar();
    printf("请输入密码(只能数字)：PS:Ctrl+z 退出输入\n");
    ah=getchar();
    while(ah!=EOF)
    {
        fputc(ah,fp2);
        ah=getchar();
        //printf("%c",ch);
    }
	fclose(fp2);
	system("pause");
    return 0;
}
