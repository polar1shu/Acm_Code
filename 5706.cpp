#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
char map[1001][1001];
int dir[4][2]={
	0,1,
	0,-1,
	1,0,
	-1,0,
};
int n,m;
int sum1,sum2;
char a[10]={"girl"};
char b[10]={"cat"};
void dfs_g(int x,int y,int num)
{
	if(num == 3)
	{
		sum1++;
		return ;
	}
	for(int i=0;i<4;++i)
	{
		int tx = x+dir[i][0];
		int ty = y+dir[i][1];
		if(tx>=0 && tx <n && ty>=0 && ty<m && (map[tx][ty]==a[num+1]))
			dfs_g(tx,ty,num+1);
	}
}
void dfs_c(int x,int y,int num)
{
	if(num == 2)
	{
		sum2++;
		return ;
	}
	for(int i=0;i<4;++i)
	{
		int tx = x+dir[i][0];
		int ty = y+dir[i][1];
		if(tx>=0 && tx <n && ty>=0 && ty<m && map[tx][ty]==b[num+1])
			dfs_c(tx,ty,num+1);
	}
}
int main()
{
	int T;
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			scanf("%d%d",&n,&m);
			sum1=sum2=0;
			for(int i=0;i<n;++i)
					scanf("%s",map[i]);			
			for(int i=0;i<n;++i)
				for(int j=0;j<m;++j)
				{
					if(map[i][j] == 'g')
						dfs_g(i,j,0);
					if(map[i][j] == 'c')
						dfs_c(i,j,0);
				}
			printf("%d %d\n",sum1,sum2);
		}
	}
}