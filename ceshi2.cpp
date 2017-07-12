#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int bit[20];
long long dp[20][200][2];
int prime[200];
bool check(int x)
{
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0) 
            return false;
    }
    return x!=1;
}

void P()
{
    for(int i=2;i<=200;i++)
    {
        if(check(i))
        {
             prime[i]=1;
        }
    }
}
long long dfs(int pos,int st,int have,int flag)
{
    if(!pos) 
        return have;
    if(flag&&dp[pos][st][have]!=-1) 
        return dp[pos][st][have];
    long long ans=0;
    int u=flag?9:bit[pos];
    for(int d=0;d<=u;d++){
        ans+=dfs(pos-1,st+d,prime[st+d],!flag&&d==u);
    }
    if(flag) dp[pos][st][have]=ans;
    return ans;
}

long long solve(long long s)
{
    memset(bit,0,sizeof(bit));
    int l=0;
    while(s){
        bit[++l]=s%10;
        s/=10;
    }
    return dfs(l,0,0,0);
}

int main()
{
    memset(prime,0,sizeof(prime));
    P();
    long long s1,s2;
    while(~scanf("%lld%lld",&s1,&s2))
    {
        memset(dp,-1,sizeof(dp));
        printf("%lld\n",solve(s2)-solve(s1-1));
    }
    return 0;
}