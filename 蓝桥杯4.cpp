#include <iostream>
#include <cstring>
using namespace std;
int a[12][12];
int sum;
int vis[12][12];
int m,n;
int dir[4][2] = {
  1,0,   
  -1,0,
  0,-1,
  0,1
};
int dfs(int x,int y,int z)
{
	if(z == sum/2)
		return 1;
	int ans=0;
	for(int i=0;i<4;++i)
	{
		int tx = x+dir[i][0];
		int ty = y+dir[i][1];
		if(tx>=0 && ty>=0 && tx<m && ty <n)
		{
			if(!vis[tx][ty] && a[tx][ty]+z<=sum)
			{
				vis[tx][ty] = 1;
				ans=dfs(tx,ty,a[tx][ty]+z);
				if(ans)
					return ans+1;
				vis[tx][ty] = 0;
			}
		}
	}
	return 0;
}
int main()
{
	while(~scanf("%d%d",&n,&m))
	{
		sum = 0;
		memset(a,0,sizeof(a));
		for(int i=0;i<m;++i)
			for(int j=0;j<n;++j)
			{
				scanf("%d",&a[i][j]);
				sum+=a[i][j];
			}
		if(sum%2)
			printf("0\n");
		else if(sum/2 == a[0][0])
			printf("1\n");
		else
		{
			memset(vis,0,sizeof(vis));
			vis[0][0] = 1;
			printf("%d\n",dfs(0,0,a[0][0]));
		}
	}
}
