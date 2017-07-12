/*#include<stdio.h>//超时
int gcd(int a,int b)
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
    int i,n,m,t;
    long long int sum;
    while(~scanf("%d%d",&n,&m))
    {
        sum=0;
        for(i=1; i<=n; ++i)
        {
            t=gcd(i,n);
            if(t>=m)
                sum+=t;
        }
        printf("%lld\n",sum);
    }
    return 0;
}*/
#include<stdio.h>
#include<math.h>
int gcd(int n) //n的欧拉函数值
{
    int t = n;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
        {
            t = t / i * (i - 1);
            while(n % i == 0)
                n /= i;
        }
    if(n > 1)
        t = t / n * (n-1);
    return t;

}
int main()
{
    int n, m;
    while(~scanf("%d%d",&n,&m))
    {
        long long int t = 0;
        int a = (int)sqrt(n+0.5);
        for(int i = 1; i <=a; i++) //枚举最大公因数
        {
            if(n % i == 0)
            {
                if(i >= m)
                    t+= gcd(n/i) * i;
                if(i * i != n && n / i >= m)
                    t += gcd(i) * (n / i);
            }
        }
        printf("%d\n",t);
    }
    return 0;
}
