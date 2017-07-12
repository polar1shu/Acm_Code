#include <iostream>
#include <queue>
using namespace std;
int G[300][300];
int Prev[300];//路径上每个节点的前驱点
bool Visited[300];
int n,m;//m是顶点数目，顶点编号从1开始 1 是源，m是汇，n是边数
unsigned Augment()
{
	int v,i;
	deque<int>q;
	memset(Prev,9,sizeof(Prev));
	memset(Visited,0,sizeof(Visited));
	Prev[1] = 0;
	Visited[1] = 1;
	q.push_back(1);
	bool bFindPath = false;//用bfs寻找一条源到汇到可行路径
	while(!q.empty())
	{
		v=q.front();
		q.pop_front();
		for(i = 1;i<=m;++i)
		{
			if(G[v][i]>0 && Visited[i]==0)
			{
				Prev[i] = v;
				Visited[i] = 1;
				if(i == m)
				{
					bFindPath = true;
					q.clear();
					break;
				}
				else
					q.push_back(i);
			}
		}
	}
	if(!bFindPath)
		return 0;
	int nMindFlow = 999999999;
	v = m;//寻找源到汇路径上容量最小的边，其容量就是此次加的总量
	while(Prev[v])
	{
		nMindFlow = min(nMindFlow,G[Prev[v]][v]);
		v = Prev[v];
	}
	//沿此路径添加反向边，同时修改路径上每条边的容量
	v = m;
	while(Prev[v])
	{
		G[Prev[v]][v] -= nMindFlow;
		G[v][Prev[v]] += nMindFlow;
		v = Prev[v];
	}
	return nMindFlow;
}
int main()
{
	while(~scanf("%d%d",&n,&m))//m是顶点数目，顶点编号从1开始
	{
		int i,j,k;
		int s,e,c;
		memset(G,0,sizeof(G));
		for(i = 0;i<n;++i)
		{
			scanf("%d%d%d",&s,&e,&c);
			G[s][e]+=c;
		}
		unsigned int MaxFlow = 0;
		unsigned int aug;
		while(aug = Augment())
			MaxFlow += aug;
		printf("%d\n",MaxFlow);
	}
}