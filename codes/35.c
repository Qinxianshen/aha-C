#include<stdio.h>
int yuannian(int y,int m,int d)
{
    switch (m)
    {
        int t;
        case 1:t=d;break;
        case 2:t=31+d;break;
        case 3:t=31+29+d;break;
        case 4:t=31+30+31+d;break;
        case 5:t=31+30+31+30+d;break;
        case 6:t=31+30+31+30+31+d;break;
        case 7:t=31+30+31+30+31+30+d;break;
        case 8:t=31+30+31+30+31+30+31+d;break;
        case 9:t=31+30+31+30+31+30+31+31+d;break;
        case 10:t=31+30+31+30+31+30+31+31+30+d;break;
        case 11:t=31+30+31+30+31+30+31+31+30+31+d;break;
        case 12:t=31+30+31+30+31+30+31+31+30+31+30+d;break;

        return t;


    }



}
int pingnian(int y,int m,int d)
{
    switch (m)
    {
        int t;
        case 1:t=d;break;
        case 2:t=31+d;break;
        case 3:t=31+28+d;break;
        case 4:t=31+30+31+d;break;
        case 5:t=31+30+31+30+d;break;
        case 6:t=31+30+31+30+31+d;break;
        case 7:t=31+30+31+30+31+30+d;break;
        case 8:t=31+30+31+30+31+30+31+d;break;
        case 9:t=31+30+31+30+31+30+31+31+d;break;
        case 10:t=31+30+31+30+31+30+31+31+30+d;break;
        case 11:t=31+30+31+30+31+30+31+31+30+31+d;break;
        case 12:t=31+30+31+30+31+30+31+31+30+31+30+d;break;

        return t;


    }



}


int main()
{
    int y,m,d,i,t;
    scanf("%d%d%d",&y,&m,&d);
    if (y%4==0)
    {
        t=runnian(y,m,d);
        printf("%d",t);
    }
    else
    {
        t=pingnian(y,m,d);
    }

    printf("%d",t);






    return 0;
}
