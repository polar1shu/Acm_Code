#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
typedef long long ll;
const int INF=0x3f3f3f3f;
ll a[110001];
ll b[110001];
ll k[1100];
ll p[1100];
ll dp[2001][21];
int main()
{
	int n,m;
	while(~scanf("%d%d",&n,&m))
	{
		ll maxb = 0;
		for(int i=0;i<n;++i)
		{
			scanf("%lld%lld",&a[i],&b[i]);
			maxb=max(maxb,b[i]);

		}
		ll maxp = 0;
		for(int i=0;i<m;++i)
		{
			scanf("%lld%lld",&k[i],&p[i]);
			maxp=max(maxp,p[i]);
		}
		int flag = 0;
		if(maxb>=maxp)
		{
			printf("-1\n");
			continue;
		}
		memset(dp,INF,sizeof(dp));
		//memset(dp,999999999,sizeof(dp));
		for(int i=0;i<11;++i)
			dp[0][i]=0;
		for(int l=0;l<m;++l)
		{
			for(int i=0;i<1001;++i)
			{
				for(int j=0;j<11;++j)
				{
					if(j>=p[l])
						continue;
					if(p[l]-j>=i)
						dp[i][j]=min(dp[i][j],k[l]);
					else
						dp[i][j]=min(dp[i][j],dp[i-p[l]+j][j]+k[l]);
				}
			}
		}
		ll sum = 0;
		for(int i=0;i<n;++i)
		{
			sum+=dp[a[i]][b[i]];
		}
		printf("%lld\n",sum);
	}
}