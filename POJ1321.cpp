#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
int n,k;
int sum,m;
char map[10][10];
int v[10];
void dfs(int cur)
{
	if(m == k)
	{
		sum++;
		return;
	}
	if(cur>n)
		return;
	for(int i=0;i<n;++i)
	{
		if(!v[i] && map[cur][i] == '#')
		{
			v[i]=1;
			m++;
			dfs(cur+1);
			v[i]=0;
			m--;
		}
	}
	dfs(cur+1);
}
int main()
{
	while(~scanf("%d%d",&n,&k) && n!=-1 && k!=-1)
	{
		for(int i=0;i<n;++i)
			scanf("%s",map[i]);
		sum=0;
		m=0;
		memset(v,0,sizeof(v));
		dfs(0);
		printf("%d\n",sum);
	}
}