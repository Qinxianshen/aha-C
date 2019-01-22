#include <stdio.h>
int f(int a)
{
    int b=0;
    static int c=3;
    a=(c++,b++);
    printf("%d\n",a);
    return a;
}
int main(void)
{
    int a = 2,i,k;
    for(i=0;i<2;i++)
        k= f(a++);
    printf("%d\n",k);
    system("pause");
    return 0;
}
