#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
int m,n;
char map[101][101];
int v[101][101];
int dir[8][2]={
	0,-1,
	0,1,
	1,0,
	-1,0,
	-1,-1,
	1,-1,
	-1,1,
	1,1,
};
void dfs(int x,int y)
{
	for(int i = 0;i<8;++i)
	{
		int tx=x+dir[i][0];
		int ty=y+dir[i][1];
		if(tx<0 || ty<0 || tx>=m || ty >= n)
			continue;
		if(map[tx][ty] == '@')
		{
			map[tx][ty]='*';
			dfs(tx,ty);
		}
	}
	return ;
}
int main()
{
	while(~scanf("%d%d",&m,&n) && !(!m && !n))
	{
		int sum = 0;
		for(int i=0;i<m;++i)
			scanf("%s",map[i]);
		memset(v,0,sizeof(v));
		for(int i=0;i<m;++i)
		{
			for(int j=0;j<n;++j)
			{
				if(map[i][j] == '@')
				{
					sum++;
					dfs(i,j);
				}
			}
		}
		printf("%d\n",sum);
	}
}