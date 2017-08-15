#include <iostream>
#include <cstdio>
#include <iostream>
using namespace std;
struct Node
{
	int parent;
	int rank;
}node[110000];
int v[110000];
int flag;
void makeset()
{
	for(int i=1;i<10000;++i)
	{
		node[i].parent=i;
		node[i].rank=0;
		v[i]=0;
	}
}
int find(int x)
{
	if(x != node[x].parent)
		return node[x].parent = find(node[x].parent);
	return node[x].parent;
}
void merge(int x,int y)
{
	x=find(x);
	y=find(y);
	if(x == y)
	{
		flag = 0;
	}
	if(node[x].rank>=node[y].rank)//数据强了这里就卡了
	{
		node[y].parent=x;
	}
	else
	{
		node[x].parent=y;
		if(node[x].rank == node[y].rank)
		{
			node[y].rank++;
		}
	}
}
int main()
{
	int a,b;
	while(~scanf("%d%d",&a,&b))
	{
		if(a == 0 && b == 0)
		{
			printf("Yes\n");
			continue;
		}
		if(a == -1 && b == -1)
			break;
		makeset();
		v[a]=1;
		v[b]=1;
		merge(a,b);
		flag = 1;
		while(scanf("%d%d",&a,&b) && (a!=0 || b!=0))
		{
			v[a]=1;
			v[b]=1;
			merge(a,b);
		}
		int ans = 0;
		for(int i=1;i<10000;++i)
		{
			if(node[i].parent == i && v[i])
				ans++;
			if(ans>1)
			{
				flag = 0;
				break;
			}
		}
		if(!flag)
			printf("No\n");
		else
			printf("Yes\n");
	}
}