#include <stdio.h>
int main() 
{
    int i, j;
    for(i = 3; i > 0; i--) 
    { // ����ĵ�����
        for(j = 0; j < 3 - i; j++)
        printf(" "); // ��ӡǰ���ո񣬿ո����ֱ�Ϊ0,1,2,3,......
        for(j = 0; j < 2 * i - 1; j++)
        printf("*"); // ��Ϊi = n,n - 1,n - 2,... 2,1,0,�ʴ�ӡ*��Ҳ����ô�ࡣ
        printf("\n");
    }
    for(i = 0; i < 3; i++) {//����ĵ������� 
        for(j = 0; j < 3 - i - 1; j++) printf(" ");
        for(j = 0; j < i * 2 + 1; j++) printf("*");
        printf("\n");
        
        return 0;
    }
