#include <stdio.h>
char a[1000][1000];
int n,m;
void dfs(int x,int y)
{
	//int dx=0,dy=0;
	a[x][y]='.';
	for(int i=-1;i<=1;++i)
	{
		for(int j=-1;j<=1;++j)
		{
			int dx=x+i;
			int dy=y+j;
			if(dx>=0 && dx<n && dy>=0 && dy<m && a[dx][dy] == 'W')
				dfs(dx,dy);
		}
	}
	return ;
}
void solve(int p)
{
	int sum = 0;
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			if(a[i][j] == 'W')
			{
				dfs(i,j);
				sum++;
				//printf("%d ",sum);
			}
		}
	}
	printf("%d\n",sum);
}
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;++i)
		//for(int j=0;j<m;++j)
			scanf("%s",a[i]);//输入％c  就是错的  无语了
	solve(1);
	return 0;
}