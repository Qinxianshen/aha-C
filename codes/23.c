#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=0;j<i;j++)
        {

            if(i%j == 0)
                continue;
        }
        printf("%d",i);
    }




	system("pause");


return 0;
}
