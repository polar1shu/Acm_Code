/*#include<stdio.h>//超时
long long int mubiao(long long int c)
{
    long long int sum=0,t;
       while(c)
       {
           sum+=c%10;
           c/=10;
       }
    return sum;
}
int main()
{
    int n;
    long long int a,b,c;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            scanf("%lld%lld",&a,&b);
            c=a*b;
            while(c>=10)
            {
                c=mubiao(c);
            }
            printf("%lld\n",c);
        }
    }
    return 0;
}*/
#include<stdio.h>//九余数定理考的是数学。。。
int main()
{
    int t;
    while(~scanf("%d",&t))
    {
        while(t--)
        {
            long long int a,b,c,sum;
            scanf("%lld%lld",&a,&b);
            sum=((a-1)%9+1)*((b-1)%9+1);
            c=(sum-1)%9+1;
            printf("%lld\n",c);
        }
    }
    return 0;
}

