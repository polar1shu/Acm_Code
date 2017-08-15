#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
#define INF 9999999
int map[1010][1010];
int visit[1010];
int source[1010];
void dijkstra(int x)
{
	for(int i=0;i<1010;++i)
	{
		visit[i]=0;
		source[i]=map[x][i];
	}
	visit[x]=1;
	source[x]=0;
	int min=INF;
	int temp;
	for(int i=0;i<1010;++i)
	{
		min = INF;
		for(int j=0;j<1010;++j)
		{
			if(!visit[j] && source[j]<min)
			{
				temp=j;
				min=source[j];
			}
		}
		if(min == INF)
			return ;
		visit[temp]=1;
		for(int j=0;j<1010;++j)
		{
			if(!visit[j] && map[temp][j]+min<source[j])
				source[j]=map[temp][j]+min;
		}
	}
}
int main()
{
	int N,M;
	while(cin>>N>>M)
	{
		for(int i=0;i<1010;++i)
			for(int j=0;j<1010;++j)
				map[i][j]=INF;
		for(int i=0;i<M;++i)
		{
			int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			if(map[a][b]>c)
			{
				map[a][b]=map[b][a]=c;
			}
		}
		int x,y;
		scanf("%d%d",&x,&y);
		dijkstra(x);
		if(source[y] == INF)
			printf("-1\n");
		else
			printf("%d\n",source[y]);
	}
}
/*
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
#define INF 9999999
int map[102][102];
int visit[102];
int source[102];
int n,m;
void dijkstra(int x)
{
	for(int i=0;i<m;++i)
	{
		visit[i]=0;
		source[i]=map[x][i];
	}
	visit[x]=1;
	source[x]=0;
	int min=INF;
	int temp;
	for(int i=0;i<m;++i)
	{
		min=INF;
		for(int j=0;j<m;++j)
		{
			if(!visit[j] && source[j]<min)
			{
				temp=j;
				min=source[j];
			}
		}
		if(min == INF)
			return ;
		visit[temp]=1;
		for(int j=0;j<m;++j)
		{
			if(!visit[j] && map[temp][j]+min<source[j])
				source[j]=map[temp][j]+min;
		}
	}
}
int main()
{
	//int n,m;
	while(~scanf("%d%d",&n,&m))
	{
		for(int i=0;i<n;++i)
			for(int j=0;j<m;++j)
			{
				map[i][j]=INF;
			}
		int a,b,c;
		for(int i=0;i<n;++i)
		{
			scanf("%d%d%d",&a,&b,&c);
			if(map[a][b]>c)
			{
				map[a][b]=map[b][a]=c;
			}
		}
		dijkstra(1);
		if(source[m-1] == INF)
			printf("?\n");
		else
			printf("%d\n",source[m-1]);
	}
}
 */