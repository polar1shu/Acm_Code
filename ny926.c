#include<stdio.h>
/*A赢的概率是
a * (100 - b) / (10000 - a * b)
B赢的概率是
100 * (100 - a) / (10000 - a * b)*/
int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
int main()
{
    int T;
    while(~scanf("%d",&T))
    {
        while(T--)
        {
            int a,b,t1,t2;
            int sum1,sum2,sum3,sum4;
            scanf("%d%d",&a,&b);
            sum1=a*(100-b);
            sum2=10000-a*b;
            sum3=100*(100-a);
            sum4=10000-a*b;
            t1=gcd(sum1,sum2);
            t2=gcd(sum3,sum4);
            printf("%d/%d %d/%d\n",sum1/t1,sum2/t1,sum3/t2,sum4/t2);
        }
    }
    return 0;
}
