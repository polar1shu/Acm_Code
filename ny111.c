#include<stdio.h>
#include<stdlib.h>
int fun(int a,int b)
//作用是得到分子和分母的最大公约数化成最简模式
{
    int t;
        while(b)
        {
            t=a%b;
            a=b;
            b=t;
        }
        return a;
}
int main()
{
    char o;
    int a,b,c,d,fz,fm,t;
    while(~scanf("%d/%d%c%d/%d",&a,&b,&o,&c,&d))
    {
        if(o == '+')
        {
            fz=a*d+b*c;
            fm=b*d;
        }
        if(o == '-')
        {
            fz=a*d-b*c;
            fm=b*d;
        }
        if(fz == 0)
            printf("0\n");
        else
        {
            t=fun(abs(fz),abs(fm));
            if(fm/t == 1)
                printf("%d\n",fz/t);
            else
                printf("%d/%d\n",fz/t,fm/t);
        }
    }
    return 0;
}
