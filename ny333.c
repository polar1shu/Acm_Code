#include<stdio.h>
#include<math.h>
long long oula(long long n)
{
    long long i,j,sum=1;
    for(i=2;i<=sqrt(n);++i)
        if(n%i == 0)
        {
            n/=i;
            sum*=i-1;
            while(n%i == 0)
            {
                n/=i;
                sum*=i;
            }
        }
    if(n>1)
        sum*=n-1;
    return sum;
}
int main()
{
    long long n;
    while(~scanf("%lld",&n))
        printf("%lld\n",oula(n));
    return 0;
}
