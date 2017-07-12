#include <iostream>
#include <cmath>
using namespace std;
long long a,b;
int mark[1000005],prime[1000005],e,bl[10000005];
int main()
{
    while(~scanf("%lld%lld",&a,&b))
    {
    for(int i=2;i<=1000000;i++)
    {
        if(!mark[i]) 
        {
            prime[++e]=i;
            for(long long j=(long long)i*i;j<=1000000;j+=i)
            {
                mark[j]=1;
            }
        }
    }
    long long x,c;
    for(int i=1;i<=e;i++)
    {
        x=(long long)ceil(1.0*a/prime[i]);
        if(x==1)
           x++;
        for(long long j=x;(c=j*prime[i])<b;j++)
        {
            bl[c-a]=1;
        }
    }
    int ans=0;
    c=b-a;
    for(int i=0;i<c;i++) 
    {
        if(!bl[i])  
            ans++;
    }
    if(a==1) 
        ans--;
    printf("%d\n",ans);}
}