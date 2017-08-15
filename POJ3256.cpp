#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
#define INF 1<<30
#define maxn 100100
#define MAXN 100100
int head[MAXN]; //head[src]表示以head为出发点的邻接表表头在数组Adj中的位置，开始时所有元素初始化为-1  
int nodeP;  //在邻接表和指向表头的head数组中定位用的记录指针，开始时初始化为0  
int dist[MAXN]; //储存到源节点的距离，在Spfa()中初始化  
bool vis[MAXN]; //这里vis作inqueue解释会更好，出于习惯使用了vis来命名，在Spfa()中初始化  
int s[MAXN];
struct Edge{
	int to; int weight;
	Edge(int t,int w):to(t),weight(w){}
};
vector<vector<Edge> > G(maxn);
void Spfa(int X,int N)
{
    memset(vis,false,sizeof(vis));

    for(int i = 0; i <= N; ++i) {
        dist[i] = INF;
    }
    queue<int> que;
    vis[X] = true;
    dist[X] = 0;	//X为源点
    que.push(X);
    while(!que.empty()) {
        int u = que.front();
        que.pop();
        vis[u] = false;	//从queue中退出
        for(int i=0;i<G[u].size();i++)
		{
			int v=G[u][i].to, w=G[u][i].weight;
			if(dist[v]>dist[u]+w)
			{
				dist[v]=dist[u]+w;
				if(!vis[v]) que.push(v),vis[v]=true;
			}
		}
	//遍历邻接表
        /*for(int i = head[now]; i != -1; i = Adj[i].next) {	//在Adj中，相同src出发指向的顶点为从head[src]开始的一项，逐项使用next寻找下去，直到找到第一个被输
                                                        //入的项，其next值为-1
            int to = Adj[i].v;				
            if(dist[to] > dist[now] + Adj[i].w) {	//松弛(RELAX)操作
                dist[to] = dist[now] + Adj[i].w;
                if(!vis[to]) {	//若被搜索到的节点不在队列que中，则把to加入到队列中去
                    vis[to] = true;
                    que.push(to);
                }
            }
        }*/
    }
}

int main()
{
	int K,N,M;
	while(~scanf("%d%d%d",&K,&N,&M))
	{
		//memset(head, -1, sizeof(head));
		for(int i=0;i<K;i++)
		cin>>s[i];
		for(int i=0;i<M;++i)
		{
			int u,v;
			scanf("%d%d",&u,&v);
			G[v].push_back(Edge(u,1));
			//addEdge(u,v,1);
		}
		int cnt=0,ok;  
  
	    for(int i=1;i<=N;i++)  
	    {  
	        Spfa(i,N);  
	        ok=1;  
	        for(int j=0;j<K;j++)  
	        if(dist[s[j]]==INF) {  
	            ok=0;  
	            break;  
	        }  
	        if(ok) cnt++;  
	    }  
	    cout<<cnt<<endl;  
	}
}
