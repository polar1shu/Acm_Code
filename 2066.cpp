#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int map[1010][1010];//城市到城市之间的距离
int s[1010];//与小草家相连的城市
int d[1010];//小草想去的城市
int visit[1010];//标记是否访问过
int source[1010];//记录到想去城市的路径
void dijkstra(int x)
{
	for(int i=1;i<1010;++i)//初始化标记
	{
		visit[i]=0;
		source[i]=map[x][i];//用source[]记录从x到当前的路径长度
	}
	visit[x]=1;//访问过了
	source[x]=0;//x到x的距离肯定为0
	int temp;//记录距离最小的点的坐标
	int min = 9999999;
	for(int i=1;i<1010;++i)
	{
		min = 9999999;
		for(int j=0;j<1010;++j)
		{
			if(!visit[j] && source[j]<min)
			{
				min = source[j];//找到能到j的最短路径长度
				temp = j;//找到了到j的最短路径，那就从j开始出发
			}
		}
		if(min == 9999999)//没找到就结束
			return ;
		visit[temp]=1;
		for(int j=1;j<1010;++j)
		{
			if(!visit[j] && map[temp][j] + min < source[j])//更新最小值
				source[j] = min + map[temp][j];
	    }
	}
}
int main()
{
	int T,S,D;//T条路，S个城市，想去D个地方
	while(~scanf("%d%d%d",&T,&S,&D))
	{
		for(int i=0;i<1010;++i)
			for(int j =0;j<1010;++j)
				map[i][j]=9999999;//初始化数组最大值
		for(int i = 0;i<T;++i)
		{
			int a,b,time;
			scanf("%d%d%d",&a,&b,&time);
			if(map[a][b]>time)//去重边，以最长的为准
			{
				map[a][b]=map[b][a]=time;
			}
		}
		for(int i=0;i<S;++i)
			scanf("%d",&s[i]);
		for(int i=0;i<D;++i)
			scanf("%d",&d[i]);
		int min = 9999999;
		for(int i=0;i<S;++i)
		{
			dijkstra(s[i]);//从与小草家第一个城市开始走
			for(int j=0;j<D;++j)
			{
				if(source[d[j]]<min)//想去的城市的距离，一个个找
					min=source[d[j]];
			}
		}
		printf("%d\n",min);
	}
}