#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;
int map[10][10];
int v[10][10];
int judge(int x,int y,int k)
{
	for(int i=1;i<10;++i)
	{
		for(int j=1;j<10;++j)
		{
			if(map[i][j] == k)
				return 0;
			if(map[j][i] == k)
				return 0;
		}
	}
	int xx=(x/3)*3;
    int yy=(y/3)*3;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(map[i+xx][j+yy] == k)
				return 0;
			if(map[j+yy][i+xx] == k)
				return 0;
        }
    }
    return 1;
}
void dfs(int x,int y)
{
	for(int i=1;i<10;++i)
	{
		if(judge(x,y,i))
		{
			for(int i)
		}
	}
}
int main()
{
	int T;
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			char c;
			for(int i=1;i<10;++i)
				for(int j=1;j<10;++j)
				{
					scanf("%c",&c);
					map[i][j]=c-'0';
				}
			for(int i=1;i<10;++i)
			{
				for(int j=1;j<10;++j)
				{
					if(map[i][j] == 0)
					{
						dfs(i,j);
					}
				}
			}
			for(int i=1;i<10;++i)
			{
				for(int j=1;j<10;++j)
				{
					printf("%d\n",map[i][j]);
				}
				printf("\n");
			}
			
		}
	}
}
/*
103000509
002109400
000704000
300502006
060000050
700803004
000401000
009205800
804000107
 */