#include<stdio.h>
char a[10][10];
int n;
int step;
int dir[4][2]=
{
	1,0,
	-1,0,
	0,1,
	0,-1,
};
int cmp(int i,int j)
{
	int tx,ty;
	if(a[i][j] != '.')
		return 0;
	for(int k=0;k<4;++k)
	{
		tx=i+dir[k][0];
		ty=j+dir[k][1];
		while(1){if(tx<0 || ty<0 || tx>=n || ty>=n || a[tx][ty] == 'X')
		{
			break;
		}
		else if(a[tx][ty] == '0')
			return 0;
		tx+=dir[k][0];
		ty+=dir[k][1];}
	}
	return 1;
}
void dfs(int k)
{
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			if(cmp(i,j))
			{
				a[i][j]='0';
				dfs(k+1);
				a[i][j]='.';
			}
		}
	}
	if(step<k)
		step=k;
}
int main()
{
	while(~scanf("%d",&n) && n)
	{
		for(int i=0;i<n;++i)
		{
			getchar();
			for(int j=0;j<n;++j)
			{
				scanf("%c",&a[i][j]);
			}
		}
		step=0;
		dfs(0);
		printf("%d\n",step);
	}
	return 0;
}