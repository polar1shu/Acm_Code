#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int n;
struct Node
{
	int u,v,edge;
}node[10001];
int v[10001];
bool cmp(Node a,Node b)
{
	return a.edge<b.edge;
}
int find(int x)
{
	if(x != v[x])
		return find(v[x]);
	return v[x];
}
void unite(int x,int y)
{
	x=find(x);
	y=find(y);
	v[y]=x;
}
int krukal()
{
	sort(node,node+(n*(n-1)/2),cmp);
	for(int i=0;i<=n;++i)
		v[i]=i;
	int sum = 0;
	for(int i=0;i<(n*(n-1)/2);++i)
		if(find(node[i].u) != find(node[i].v))
		{
			unite(node[i].u,node[i].v);
			sum+=node[i].edge;
		}
	return sum;
}
int main()
{
	while(~scanf("%d",&n) && n)
	{
		int m = n*(n-1)/2;
		for(int i=0;i<m;++i)
		{
			 scanf("%d%d%d",&node[i].u,&node[i].v,&node[i].edge);
		}
		printf("%d\n",krukal());
	}
}