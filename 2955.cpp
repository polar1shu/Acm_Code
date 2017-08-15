#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct node
{
	int money;
	double p;
}bank[101];
int main()
{
	int T;
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			double P;
			int N;
			scanf("%lf%d",&P,&N);
			P=1.0-P;
			int sum = 0;
			for(int i=0;i<N;++i)
			{
				scanf("%d%lf",&bank[i].money,&bank[i].p);
				bank[i].p=1.0-bank[i].p;
				sum+=bank[i].money;
			}
			double dp[10000]={1.0};
			for(int i=0;i<N;++i)
			{
				for(int j=sum;j>=bank[i].money;--j)
				{
					dp[j]=max(dp[j],dp[j-bank[i].money]*bank[i].p);
				}
			}
			for(int i = sum;i>=0;--i)
			{
				if(dp[i]>=P)
				{
					printf("%d\n",i);
					break;
				}
			}
		}
	}
}
