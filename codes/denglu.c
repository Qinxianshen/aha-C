#include<stdio.h>
#include<stdlib.h>
int main()
{

    FILE *fp,*fp2;
    char ch,ah,k,k1;
    int flag1=1,flag2=1;
    if(!(fp=fopen("D:\\zuce.txt","r")))
    {
        printf("error");
    }

    //ch=getchar();
    printf("�������û�����PS:Ctrl+z �˳�����\n");
    k=getchar();
    while(k!=EOF)
    {
        ch=fgetc(fp);
		if(k!=ch)
        {
		flag1=0;
        }
        k=getchar();
        //printf("%c",ch);
    }
    fclose(fp);
    if(!(fp2=fopen("D:\\xingxi2.txt","r")))
    {
        printf("error");
    }
    //ch=getchar();
    printf("����������(ֻ������)��PS:Ctrl+z �˳�����\n");
    k1=getchar();
    while(k1!=EOF)
    {
        ah=fgetc(fp2);
        if(k1!=ah)
        {
		flag2=0;        
        }
        k1=getchar();
        //printf("%c",ch);
    }
	fclose(fp2);
    if(flag1==0)
		printf("�˺ų���\n");
    if(flag2==0)
		printf("�������\n");
    if(flag1==1&&flag2==1)
		printf("��֤ͨ��\n");
	system("pause");
    return 0;
}
