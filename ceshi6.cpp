#include <iostream>
#include <algorithm>
using namespace std;
/*int max(int a,int b)
{
    return a>b?a:b;
}
int min(int a,int b)
{
    return a<b?a:b;
}*/
int main()
{
    int P;
    while(~scanf("%d",&P))
    {
        while(P--)
        {
            int num,m,n;
            int dp[1002][52];
            scanf("%d%d%d",&num,&m,&n);｀
            memset(dp,100, sizeof(dp));
            for(int i=0;i<=m;++i)
                dp[0][i]=0;
            for(int i=1;i<=n;++i)
            {
                for(int j=1;j<=m;++j)
                {
                    for(int k=1;k<=i;++k)
                    {
                        int t;
                        t=max(dp[i-k][j],dp[k-1][j-1])+1;
                        dp[i][j]=min(dp[i][j],t);
                    }
                }
            }
            printf("%d %d\n",num,dp[n][m]);
        }
    }
}