#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
int l,r,c;
int sx,sy,sz;
int ex,ey,ez;
char map[35][35][35];
int v[35][35][35];
int dir[6][3]={
	0,0,1,
	0,0,-1,
	0,1,0,
	0,-1,0,
	1,0,0,
	-1,0,0,
};
struct node
{
	int x,y,z,step;
};
int check(int x,int y,int z)
{
	if(x<0 || y<0 || z<0 || x>=l || y>=r || z>=c)
		return 1;
	else if(map[x][y][z] == '#')
		return 1;
	else if(v[x][y][z])
		return 1;
	return 0;
}
int bfs()
{
	node a,next;
	queue<node> q;
	a.x=sx;
	a.y=sy;
	a.z=sz;
	a.step=0;
	v[sx][sy][sz]=1;
	q.push(a);
	while(!q.empty())
	{
		a=q.front();
		q.pop();
		if(a.x == ex && a.y == ey && a.z == ez)
			return a.step;
		for(int i=0;i<6;++i)
		{
			next.x=a.x+dir[i][0];
			next.y=a.y+dir[i][1];
			next.z=a.z+dir[i][2];
			if(check(next.x,next.y,next.z))
				continue;
			v[next.x][next.y][next.z]=1;
			next.step=a.step+1;
			q.push(next);
		}
	}
	return 0;
}
int main()
{
	while(~scanf("%d%d%d",&l,&r,&c) && (l+r+c))
	{
		for(int i=0;i<l;++i)
		{
			for(int j=0;j<r;++j)
			{
				scanf("%s",map[i][j]);
				for(int k = 0;k<c;++k)
				{
					if(map[i][j][k] == 'S')
					{
						sx=i;
						sy=j;
						sz=k;
					}
					if(map[i][j][k] == 'E')
					{
						ex=i;
						ey=j;
						ez=k;
					}
				}
			}
		}
		memset(v,0,sizeof(v));
		int ans = bfs();
		if(ans)
			printf("Escaped in %d minute(s).\n",ans);
		else
			printf("Trapped!\n");
	}
}