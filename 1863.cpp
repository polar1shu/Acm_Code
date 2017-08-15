#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int map[101][101];
int visit[101];
int low[101];
int n,m;
int flag;
#define INF 999999999
int prime()
{
	int min,result=0;
	int pos;
	memset(visit,0,sizeof(visit));
	visit[1]=1;
	for(int i=1;i<=m;++i)
		low[i]=map[1][i];
	for(int i=1;i<m;++i)
	{
		min=INF;
		pos=-1;
		for(int j=1;j<=m;++j)
		{
			if(!visit[j] && min>low[j])
			{
				min=low[j];
				pos=j;
			}
		}
		if(pos == -1)
			return -1;
		result+=min;
		visit[pos]=1;
		for(int j=1;j<=m;++j)
		{
			if(!visit[j] && low[j]>map[pos][j])
			{
				low[j]=map[pos][j];
			}
		}
	}
	return result;
	
}
int main()
{
	while(~scanf("%d%d",&n,&m) && n)
	{
		for(int i=1;i<=m;++i)
			for(int j=1;j<=m;++j)
				map[i][j]=INF;
		int sum=0;
		for(int i=0;i<n;++i)
		{
			int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			sum+=c;
			if(map[a][b]>c)
				map[a][b]=map[b][a]=c;
		}
		if(prime() == -1)
			printf("?\n");
		else
			printf("%d\n",prime());
	}
}
/*
#include<cstdio>

#include<cstring>
#define INF 1<<30
int n,m,vis[110],low[110];
int map[110][110];


int init()
{
    for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
    map[i][j] = INF;
    memset(vis,0,sizeof(vis));
}
int prim()
{
    int ans=0;
    for(int i = 0; i <= n; i++)
    low[i] = map[1][i];
    vis[1] = 1;
    for(int i = 1; i < n; i++)
    {
        int temp = INF,pos=-1;
        for(int j = 1; j <= n; j++)
        if(temp>low[j]&&!vis[j])
        {
            pos = j;
            temp = low[j];
        }
        if(pos==-1) 
        return -1; // 缺前边的路
        int k = pos;
        vis[k] = 1;
        ans+=low[k];
        for(int j = 1; j <= n; j++)
        if(!vis[j]&&low[j]>map[k][j])
        low[j] = map[k][j];
    }
    return ans;
}
int main()
{
    int a,b,c;
    while(scanf("%d%d",&m,&n)==2)
    {
        if(!m) 
        	break;
        init();
        for(int i = 0; i < m; i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            map[a][b] = map[b][a] = c;
        }
        int p = prim();
        if(p==-1)
        puts("?");
        else
        printf("%d\n",p);
    }
    return 0;
} 
 */