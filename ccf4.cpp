#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int ma[10005][10005];
int dp[10005][10005];
int c[10005];
int main()
{
    int n,m;
    int sum=0;
    memset(ma,999999,sizeof(ma));
    memset(dp,999999,sizeof(dp));
    memset(c,999999,sizeof(c));
    scanf("%d%d",&n,&m);
    while(m--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        dp[a][b]=c;
        dp[b][a]=c;
    }
    for(int i=1;i<=n;i++)
        dp[i][i]=0;
    for(int i=1;i<=n;i++)
        for(int j=i;j<=n;j++)
        for(int k=1;k<=n;k++)
        dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
    for(int i=1;i<=n;i++)
        c[i]=dp[1][i];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        if(dp[1][i]==dp[1][j]+dp[j][i])
        if(i!=j)
        c[i]=min(c[i],dp[j][i]);

    for(int i=1;i<=n;i++)
        //for(int j=i;j<=n;j++)
        //printf("%d ",c[i]);
        sum+=c[i];
        printf("%d\n",sum);
}