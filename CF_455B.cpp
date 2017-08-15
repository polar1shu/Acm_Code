#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n,m;
int father[5000];
void init()
{
	for(int i=0;i<n;++i)
		father[i]=i;
}
int find(int x)
{
	if(x!=father[x])
		return find(father[x]);
	return father[x];
}
void merge(int x,int y)
{
	x=find(x);
	y=find(y);
	if(x!=y)
		father[y]=x;
}
int main()
{
	while(~scanf("%d%d",&n,&m))
	{
		init();
		for(int i=0;i<m;++i)
		{
			int x,y;
			scanf("%d%d",&x,&y);
			merge(x,y);
		}
		int sum = 0;
		for(int i=0;i<n;++i)
		{
			if(father[i] == i)
				sum++;
		}
		long long ans = 1;
		for(int i=0;i<n-sum;++i)
		{
			ans*=2;
		}
		printf("%lld\n",ans);
	}
}