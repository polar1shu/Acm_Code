/*
最小生成树
题意是有S颗卫星，P个哨所，现在要求你将这些哨所得网络连通
有两种联通方式：一种是一个村庄配备一个卫星这样可以随意和其他村庄联系
一种是给两个村庄配备无线电通讯，在D距离内都可以通讯
求最短距离D是多少，这样可以买的无线电通讯设备最少
思路：一看就是最小生成树
连接P个村庄，需要P－1条边，而S个卫星可以 代替S-1条边
那么先求所有村庄的连起来的最短路径每个村庄和每个村庄之间的路径
用一个数组存起来
然后用贪心的思想找到(P-1)-(S-1)-1的值，这一个就是最大的D
或者用最小生成树找到了t－1条边，然后直接减去S代替的边就可以了
就是(t-1)-(s-1),因为设置的是t++所以呢，最后一个赋给其它后 
自身还是＋＋了 ，所以减去1
 */
#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int m;
int father[550];
double a[550];
int t;
struct NNode
{
	double x,y;
}node[550];
struct Node
{
	double u,v;
	double len;
}es[500005];
void init(int P)
{
	for(int i=0;i<=P;++i)
		father[i]=i;
}
bool cmp(Node a,Node b)
{
	return a.len<b.len;
}
double get_len(double x1,double y1,double x2,double y2)
{
	return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
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
	if(x>y)
		father[x]=y;
	else
		father[y]=x;
}
void kruskal(int P)
{
	t = 0;
	sort(es,es+m,cmp);
	init(P);
	for(int i=0;i<m;++i)
	{
		if(find(es[i].u)!=find(es[i].v))
		{
			merge(es[i].u,es[i].v);
			a[t++]=es[i].len;
			/*P--;
			if(P==1)
				return ;*/
			//可不写
		}
	}
}
int main()
{
	int T;
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			memset(a,0.0,sizeof(a));
			int S,P;
			m = 0;
			scanf("%d%d",&S,&P);
			for(int i=0;i<P;++i)
				scanf("%lf%lf",&node[i].x,&node[i].y);
			for(int i=0;i<P;++i)
			{
				for(int j=i+1;j<P;++j)
				{
					es[m].u=i;
					es[m].v=j;
					es[m++].len=get_len(node[i].x,node[i].y,node[j].x,node[j].y);
				}
			}
			kruskal(P);
			//printf("%.2lf\n",a[t-S]);
			printf("%.2lf\n",a[P-S-1]);
		}
	}
}