#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
/*
n:升级经验
m:保留忍耐度
k:怪的总数
s:最多杀怪数
fate[i].a:杀怪的经验
fate[i].b:杀怪消耗的忍耐度
 */
struct node
{
	int a,b;
}fate[101];
int main()
{
	int n,m,k,s;
	while(~scanf("%d%d%d%d",&n,&m,&k,&s))
	{
		int a,b;
		for(int i=0;i<k;++i)
		{
			scanf("%d%d",&fate[i].a,&fate[i].b);
		}
		int dp[101][101];
		memset(dp,0,sizeof(dp));
		for(int i=0;i<k;++i)//怪的总数
		{
			for(int j=fate[i].b;j<=m;++j)//剩的忍耐度
			{
				for(int l=1;l<=s;++l)//保留j忍耐度杀s个怪的经验
				{
					dp[j][l]=max(dp[j][l],dp[j-fate[i].b][l-1]+fate[i].a);
				}
			}
		}
		int flag = 0;
		for(int i=0;i<=m;++i)
		{
			for(int j=0;j<=s;++j)
			{
				if(dp[i][j]>=n)
				{
					printf("%d\n",m-i);
					flag = 1;
					break;
				}
			}
			if(flag)
				break;
		}
		if(!flag)
			printf("-1\n");
	}
}