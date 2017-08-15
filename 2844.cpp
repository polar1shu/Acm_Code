#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int n,M;
	while(~scanf("%d%d",&n,&M) && (n+M))
	{
		int a[101];
		int m[101];
		for(int i=0;i<n;++i)
			scanf("%d",&a[i]);
		for(int i=0;i<n;++i)
			scanf("%d",&m[i]);
		int dp[100001];
		memset(dp,-1,sizeof(dp));
		dp[0]=0;
		for(int i=0;i<n;++i)
		{
			for(int j=0;j<=M;++j)
			{
				if(dp[j]>=0)
					dp[j]=m[i];
				else if(j<a[i] || dp[j-a[i]]<=0)
				{
					dp[j]=-1;
				}
				else
					dp[j]=dp[j-a[i]]-1;
			}
		}
		printf("%d\n",dp[M]);
	}
}