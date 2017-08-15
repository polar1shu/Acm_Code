#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int v[3][11];
void db()
{
	for(int i=1;i<11;++i)
	{
		
	}
}
int main()
{
	db();
	int n;
	while(~scanf("%d",&n) && n)
	{
		printf("%d\n",ans[n]);
	}
}
/*
#include<stdio.h>
#include<string.h>
#define MAX 100
int visit[3][MAX];
int dp[MAX];
int sum;
void dfs(int num,int n)//num代表搜索当前行数 
{
    int i,j;
    if(num==n+1) sum++;
    else
    {
        for(i=1;i<=n;i++)//遍历每一列 
        {
            if(!visit[0][i]&&!visit[1][num+i]&&!visit[2][num-i+n])//若当前列 主对角线 副对角线 都可用 
            {
                visit[0][i]=visit[1][num+i]=visit[2][num-i+n]=1;
                dfs(num+1,n);
                visit[0][i]=visit[1][num+i]=visit[2][num-i+n]=0;
            }
        }
    }
}
int main()
{
    int n,i,j;
    memset(dp,0,sizeof(dp));
    for(i=1;i<=10;i++)
    {
        sum=0;
        memset(visit,0,sizeof(visit));
        dfs(1,i);
        dp[i]=sum;
    }
    while(scanf("%d",&n)&&(n!=0))
    {
        printf("%d\n",dp[n]);
    }
    return 0;
}

 */
/*#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int ans[12];
int v[12];//v[i]=j,代表的是第i行j列有棋子
int sum;
int n;
int judge(int x)
{
	for(int i=1;i<x;++i)
	{
		if(v[i] == v[x] || abs(v[x]-v[i]) == abs(x-i))
			return 0;
	}
	return 1;
}
void dfs(int x)
{
	if(x == n+1)
		sum++;
	else
	{
		for(int i=1;i<=n;++i)
		{
			v[x]=i;
			if(judge(x))
				dfs(x+1);
		}
	}
}
void db()
{
	for(int i=1;i<11;++i)
	{
		sum=0;
		n=i;
		dfs(1);
		ans[i]=sum;
	}
}
int main()
{
	db();
	int n;
	while(~scanf("%d",&n) && n)
	{
		printf("%d\n",ans[n]);
	}
}*/