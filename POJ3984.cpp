#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int map[7][7];
int v[7][7];
int dir[4][2]={
	1,0,
	-1,0,
	0,1,
	0,-1,
};
int p[36][2];
int a[36][2];
int min_path=100000000;
void dfs(int x,int y,int step)
{
	if(x == 4 && y == 4)
	{
		if(step < min_path)
			min_path=step;
		for(int i=0;i<min_path;++i)
		{
			p[i][0]=a[i][0];
			p[i][1]=a[i][1];
		}
		return ;
	}
	for(int i=0;i<4;++i)
	{
		int tx = x+dir[i][0];
		int ty = y+dir[i][1];
		if(tx<0 || tx>4 || ty<0 || ty>4)
			continue;
		if(!v[tx][ty] && map[tx][ty] == 0)
		{
			v[tx][ty] = 1;
			a[step][0]=tx;
			a[step][1]=ty;
			dfs(tx,ty,step+1);
			v[tx][ty] = 0;
		}
	}
	return ;
}
int main()
{
	ios_base::sync_with_stdio(0);
	for(int i=0;i<5;++i)
		for(int j=0;j<5;++j)
			cin>>map[i][j];
	dfs(0,0,1);
	for(int i=0;i<min_path;++i)
		cout<<"("<<p[i][0]<<", "<<p[i][1]<<")"<<endl;

}