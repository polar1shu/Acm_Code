#include <iostream>
#include <cstring>
using namespace std;
int a[60][60];
int v[60][60];
int x,y;
int room=0,sum=0;
int maxsum =0;
int max(int m,int n)
{
	return m>n?m:n;
}
void dfs(int dx,int dy)
{
	if(v[dx][dy])
		return ;
	++sum;
	v[dx][dy]=room;
	if((a[dx][dy] & 1) == 0)
	    dfs(dx,dy-1);
	if((a[dx][dy] & 2) == 0)
	    dfs(dx-1,dy);
	if((a[dx][dy] & 4) == 0)
	    dfs(dx,dy+1);
	if((a[dx][dy] & 8) == 0)
	    dfs(dx+1,dy); 
}
int main()
{
	while(~scanf("%d%d",&x,&y))
	{
		for(int i=0;i<x;++i)
		{
			for(int j=0;j<y;++j)
			{
				scanf("%d",&a[i][j]);
			}
		}
		memset(v,0,sizeof(v));
		for(int i=0;i<x;++i)
		{
			for(int j=0;j<y;++j)
			{
				if(!v[i][j])
				{
					++room;
					sum=0;
					dfs(i,j);
					maxsum=max(sum,maxsum);
				}
			}
		}
		printf("%d\n%d\n",room,maxsum);
	}
}