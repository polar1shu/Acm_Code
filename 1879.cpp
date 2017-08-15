#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct Node
{
	int x;
	int y;
	int cost;
	int sta;
}node[10010];
int a[10010];
int n,m;
bool cmp(Node a,Node b)
{
	return a.cost<b.cost;
}
void init()
{
	for(int i=0;i<10010;++i)
		a[i]=i;
}
int find(int x)
{
	if(a[x] != x)
		return find(a[x]);
	return a[x];
}
void merge(int x,int y)
{
	x=find(x);
	y=find(y);
	if(x == y)
		return ;
	a[y]=x;
	return ;
}
int main()
{
	while(~scanf("%d",&n) && n)
	{
		m=n*(n-1)/2;
		for(int i=0;i<m;++i)
		{
			scanf("%d%d%d%d",&node[i].x,&node[i].y,&node[i].cost,&node[i].sta);
			if(node[i].sta == 1)
				node[i].cost=0;
		}
		sort(node,node+m,cmp);
		init();
		int sum = 0;
		for(int i=0;i<m;++i)
		{
			if(find(node[i].x) != find(node[i].y))
			{
				merge(node[i].x,node[i].y);
				sum+=node[i].cost;
			}
		}
		printf("%d\n",sum);
	}
}