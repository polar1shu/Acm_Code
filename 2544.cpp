#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int map[101][101];
int visit[101];
int source[101];
#define INF 9999999
void dijkstra(int x)
{
	for(int i=0;i<101;++i)
	{
		visit[i]=0;
		source[i]=map[x][i];
	}
	visit[x]=1;
	source[x]=0;
	int min=INF;
	int temp;
	for(int i=1;i<101;++i)
	{
		min=INF;
		for(int j=0;j<101;++j)
		{
			if(!visit[j] && source[j]<min)
			{
				min=source[j];
				temp=j;
			}
		}
		if(min == INF)
			return ;
		visit[temp]=1;
		for(int j=0;j<101;++j)
		{
			if(!visit[j] && min+map[temp][j]<source[j])
				source[j]=min+map[temp][j];
		}
	}
}
int main()
{
	int N,M;
	while(~scanf("%d%d",&N,&M) && (N||M))
	{
		/*(N == 0 && M == 0)
			break;*/
		for(int i=0;i<101;++i)
			for(int j=0;j<101;++j)
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
		dijkstra(1);
		printf("%d\n",source[N]);
	}
}