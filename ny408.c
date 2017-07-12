#include<stdio.h>
#include<math.h>
/*题目的意思就是当m的x次方大于等于n时（m^x*x)与n的真分数
 就是最大公约数*/
long long gcd(long long a,long long b)
{
    long long int t;
    while(b)
    {
        t=a%b;
        a=b;
        b=t;
    }
    return a;//return b==0?a:gcd(b,a%b);
    //同样是求最大公约数  人家的好短。。。
}
int main()
{
    int T,a;
    //long long int n,m,x,i,t,a=0;
    while(~scanf("%d",&T))
    //scanf("%d",&T);
    {
        a=0;
        while(T--)
        {
            long long int n,m,x,i,t;//a不能写在这里，不然每次都是1。。。
            scanf("%lld%lld",&n,&m);
            for(i=1;i<=100;++i)//题目给的范围数据完全是错的，n时long long m也不是小于20的
            //我也不知道i的范围是多少。。。
            {
                x=pow(m,i);
                if(x>=n)
                    break;
            }
            x*=i;
            t=gcd(x,n);
            printf("Case %d: %lld/%lld\n",++a,x/t,n/t);
        }
    }
    return 0;
}

/*#include<cstdio>
long long gcd(long long a,long long b)
{
    return b==0?a:gcd(b,a%b);
}
int main()
{
    int i=0,t;
    long long n,k,s,g;
    scanf("%d",&t);
    while(t--)
    {
        i++;
        s=1;
        scanf("%lld%lld",&n,&k);
        g=k;
        while(g<n)
        {
            g*=k;
            s++;
        }
        g*=s;
        s=gcd(g,n);
        printf("Case %d: %lld/%lld\n",i,g/s,n/s);
    }
    return 0;
}*/