#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
#define INF 03xfxfxfxf
int score[1001];
int cost[1001];
int v[1001][1001];
int dp[1002];
int main()
{
	int T;
	while(~scanf("%d",&T))
	{
		int ans = 1;
		while(T--)
		{
			int B,N;
			scanf("%d%d",&B,&N);
			for(int i=0;i<N;++i)
			{
				scanf("%d%d",&score[i],&cost[i]);
			}
			memset(dp,0,sizeof(dp));
			memset(v,0,sizeof(v));
			for(int i=0;i<N;++i)//到j钱能吃到的分最高的食物
			{
				for(int j=B;j>=cost[i];--j)
				{
					if(dp[j]<dp[j-cost[i]]+score[i])
					{
						dp[j]=dp[j-cost[i]]+score[i];
						v[i][j]=1;
					}
				}
			}
			int j = B;
			int len = 0;
			int num[101];
			memset(num,0,sizeof(num));
			int sum = 0;
			for(int i=N-1;i>=0;--i)
			{
				if(v[i][j])
				{
					num[len++]=i;
					j-=cost[i];
					sum+=cost[i];
				}
			}
			sort(num,num+len);
			printf("Case #%d:\n",ans++);
			printf("%d %d\n",dp[B],sum);
			if(len>0)
				printf("%d",num[0]+1);
			for(int i=1;i<len;++i)
			{
				printf(" %d",num[i]+1);
			}
			if(len>0)
				printf("\n");
		}
	}
}