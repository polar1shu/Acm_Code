#include<stdio.h>
//快速幂法复杂度为o（logb）
long long mod(long long a,long long b,long long c)
{
    long long  ans=1;
    a%=c;
    while(b>0)
    {
        if(b%2 == 1)
            ans=(ans*a)%c;
        b/=2;
        a=(a*a)%c;
    }
    return ans;
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    //scanf("%d",&n);
    {
        while(n--)
        {
            long long a,b,c;
            scanf("%lld%lld%lld",&a,&b,&c);
            printf("%lld\n",mod(a,b,c));
        }
    }
    return 0;
}
/*算法网址http://wenku.baidu.com/link?url=5Yb3tjzzXlY_UYGol5gZHCjrwNcDebPcpDLSJi33-Q6N5c-FS01vYoVF_5pe0mD6u3VDHG0KcIZQLgb2DW4sorBUjd3ARE--g9_Qv9R1ZBu还是不太懂这个算法。。。*/
