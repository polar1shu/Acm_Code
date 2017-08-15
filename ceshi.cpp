#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#include<algorithm>
using namespace std;
const int INF=(1<<30);
const int maxn=10000+5;
struct Edge{
	int to; int weight;
	Edge(int t,int w):to(t),weight(w){}
};
vector<vector<Edge> > G(maxn);
bool inq[maxn];  //判断是否在队列里 
int dist[maxn];
int s[maxn];
void Spfa(int s,int n)
{
	memset(inq,false,sizeof(inq));
	for(int i=0;i<n+1;i++) dist[i]=INF;
	
	queue<int> Q;
	dist[s]=0;
	inq[s]=true;    
	Q.push(s);
	while(!Q.empty())
	{
		int u=Q.front(); 
		Q.pop();
		inq[u]=false;
		for(int i=0;i<G[u].size();i++)
		{
			int v=G[u][i].to, w=G[u][i].weight;
			if(dist[v]>dist[u]+w)
			{
				dist[v]=dist[u]+w;
				if(!inq[v]) Q.push(v),inq[v]=true;
			}
		}
	}
}
int main()
{
	int K,N,M,u,v;
	cin>>K>>N>>M; 
	for(int i=0;i<K;i++)
		cin>>s[i];
	for(int i=0;i<M;i++)
	{
		cin>>u>>v;
		G[v].push_back(Edge(u,1));
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
	return 0;
}
