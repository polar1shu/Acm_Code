#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
int n, m, ok, flag[105][105], a[105][105], dir[4][2] = {1,0,0,1,-1,0,0,-1};
void Sech(int x, int y)
{
	int dx, dy, i;
	flag[x][y] = 1;
	for(i=0;i<=3;i++)
	{
		dx = x+dir[i][0];
		dy = y+dir[i][1];
		if(dx<1 || dx>n || dy<1 || dy>m)
		{
			ok = 0;
			continue;
		}
		if(flag[dx][dy]==1 || a[dx][dy]!=a[x][y])
			continue;
		Sech(dx, dy);
	}
}
int main()
{
	int i, j, z0, z1, x0, x1;
	while(scanf("%d%d", &n, &m)!=EOF)
	{
		memset(flag, 0, sizeof(flag));
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
				scanf("%1d", &a[i][j]);
		}
		z0 = z1 = x0 = x1 = 0;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(flag[i][j]==0)
				{
					ok = 1;
					Sech(i, j);
					if(a[i][j]==0)
						z0++, x0 += ok;
					else
						z1++, x1 += ok;
				}
			}
		}
		if(z1==1 && x0==0)
			printf("1\n");
		else if(z1==1 && x0==1)
			printf("0\n");
		else
			printf("-1\n");
	}
	return 0;
}