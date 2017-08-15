/*
数位dp入门题
 */
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;
int dp[20][2];
int a[20];
ll dfs(int pos,int pre,int sta,bool limit)
{
	if(pos == -1)
		return 1;
	if(!limit && dp[pos][sta] != -1)
		return dp[pos][sta];
	int up=limit?a[pos]:9;
	ll ans = 0;
	for(int i=0;i<=up;++i)
	{
		if(pre == 6 && i == 2)
			continue;
		if(i == 4)
			continue;
		ans+=dfs(pos-1,i,i == 6,limit && i == a[pos]);
	}
	if(!limit)
		dp[pos][sta]=ans;
	return ans;
}
ll solve(ll x)
{
	int pos = 0;
	while(x)
	{
		a[pos++]=x%10;
		x/=10;
	}
	return dfs(pos-1,-1,0,true);
}
int main()
{
	int n,m;
	while(~scanf("%d%d",&n,&m) && (n+m))
	{
		memset(dp,-1,sizeof dp);
		printf("%lld\n",solve(m)-solve(n-1));
	}
}