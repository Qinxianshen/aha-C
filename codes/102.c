#include <stdio.h>
int main() 
{
    int i, j;
    for(i = 3; i > 0; i--) 
    { // 上面的倒三角
        for(j = 0; j < 3 - i; j++)
        printf(" "); // 打印前导空格，空格数分别为0,1,2,3,......
        for(j = 0; j < 2 * i - 1; j++)
        printf("*"); // 因为i = n,n - 1,n - 2,... 2,1,0,故打印*数也是这么多。
        printf("\n");
    }
    for(i = 0; i < 3; i++) {//下面的等腰三角 
        for(j = 0; j < 3 - i - 1; j++) printf(" ");
        for(j = 0; j < i * 2 + 1; j++) printf("*");
        printf("\n");
        
        return 0;
    }
