
#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
#define N 20
int bit[N];
long long dp[N][200][2];
int prime[200];

bool check(int x)
{
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return x!=1;
}

void P()
{
    for(int i=2;i<=200;i++){
        if(check(i)){
             prime[i]=1;
        }
    }
}
//flag表示之前的数是否是上界的前缀（即后面的数能否任意填）。
//flag为 1 表示之前的数不是前缀，可以任意填
long long dfs(int pos,int st,int have,int flag)
{
    if(!pos) return have;
    if(flag&&dp[pos][st][have]!=-1) return dp[pos][st][have];
    long long ans=0;
    int u=flag?9:bit[pos];
    for(int d=0;d<=u;d++){
        ans+=dfs(pos-1,st+d,prime[st+d],!flag&&d==u);
        //判断之前位置的和加上当前位置是否可以是一个素数
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
    int t;
    cin>>t;
    memset(prime,0,sizeof(prime));
    P();
    while(t--){
        memset(dp,-1,sizeof(dp));
        long long s1,s2;
        cin>>s1>>s2;
//        cout<<solve(s2)<<" "<<solve(s1-1)<<endl;
        cout<<solve(s2)-solve(s1-1)<<endl;
    }
    return 0;
}