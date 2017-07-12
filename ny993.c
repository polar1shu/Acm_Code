#include<stdio.h>
int gcd(int a,int b)//求最大公约数
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
    int n,i,m,m1,m2;
    int sum1,sum2,sum3,sum;
    while(~scanf("%d%d%d",&n,&m1,&m2))
    {
        if(n%m1 == 0)
            sum1=n/m1-1;
        else
            sum1=n/m1;
        if(n%m2 == 0)
            sum2=n/m2-1;
        else
            sum2=n/m2;
        m=m1*m2/gcd(m1,m2);
        if(n%m == 0)
            sum3=n/m-1;
        else
            sum3=n/m;
        sum=sum1+sum2-sum3;
        printf("%d\n",sum);
    }
    return 0;
}
