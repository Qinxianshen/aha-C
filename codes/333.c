#include<stdio.h>
#include<windows.h>
int main()

{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
        Sleep(200);
    }
}
