#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
char map[15][15];
int v[15][15];
int n,m,l;
int main()
{
	while(~scanf("%d%d%d",&n,&m,&l) && (n+m))
	{
		for(int i=1;i<=n;++i)
			scanf("%s",map[i]);//注意如此输入，i是从1~n,j是从0~m-1
		/*for(int i=1;i<=n;++i)
		{
			for(int j=0;j<m;++j)
				printf("%c",map[i][j]);
			printf("\n");
		}*/
		int step;
		int x = 1;
		step = 0;
		int y = l-1;
		memset(v,0,sizeof(v));
		while(1)
		{
			step++;
			if(map[x][y] == 'S' && !v[x][y])
			{
				v[x][y]=step;
				x++;
			}
			else if(map[x][y] =='W' && !v[x][y])
			{
				v[x][y]=step;
				y--;
			}
			else if(map[x][y] == 'E' && !v[x][y])
			{
				v[x][y]=step;
				y++;
			}
			else if(map[x][y] == 'N' && !v[x][y])
			{
				v[x][y]=step;
				x--;
			}

			if(x<1||x>n||y<0||y == m)
			{
				printf("%d step(s) to exit\n",step);
				/*for(int i =1;i<=n;++i)
				{
					for(int j=0;j<m;++j)
					{
						printf("%d",v[i][j]);
					}
					printf("\n");
				}*/
				break;
			}
			else if(v[x][y])
			{
				printf("%d step(s) before a loop of %d step(s)\n",v[x][y]-1,step+1-v[x][y]);
				/*for(int i =0;i<n;++i)
				{
					for(int j=0;j<m;++j)
					{
						printf("%d",v[i][j]);
					}
					printf("\n");
				}*/
				break;
			}
	    }
	}
}