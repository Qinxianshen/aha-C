#define SQURARE(n) ((n)*(n))
#include <stdio.h>
int main(void)
{
    int i=1;
    while(i<=5)
        printf("%d\n",SQURARE(++i));
    system("pause");
    return 0;
}
