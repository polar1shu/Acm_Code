#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,m;
	while(~scanf("%d%d",&n,&m))
	{
		int w[3500],d[3500];
		//int dp[3500][3500];
		int dp[13000];
		for(int i=0;i<n;++i)
			scanf("%d%d",&w[i],&d[i]);
		memset(dp,0,sizeof(dp));//这样写也行memset(dp,0,13000*sizeof(int))
        for(int i=0;i<n;++i)
        	for(int j=m;j>=w[i];--j)
        	{
        		dp[j]=dp[j]>(dp[j-w[i]]+d[i])?dp[j]:(dp[j-w[i]]+d[i]);
        		//if(j<w[i])
        		//	dp[i][j]=dp[i+1][j];
        		//else 
        		//	dp[i][j]=max(dp[i+1][j],dp[i+1][j-w[i]]+d[i]);
        	}
        printf("%d\n",dp[m]);
	}
}