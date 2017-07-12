#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;
int totalLen;//正在走的路程
int totalCost;//正在走的花费
int visited[110];
int minLen = 1<<30;//最优路径
int minL[110][10001];//表示从1到i点，花销为j的最短路
//因为每条路最大花费为100，最多有100条路
struct Road{
	int d,l,t;
};
int K,N,R;//有K块钱，N个城市，R条路,
vector<vector<Road> >cityMap(110);// 创造一个邻接表，邻接表是一个二维数组
void dfs(int s)
{
	if(s == N)//走到了终点 可以结束了
	{
		minLen = min(minLen,totalLen);
		return ;
	}
	for(int i = 0;i<cityMap[s].size();++i)//对于从i到s的数据进行遍历
	{
		int d = cityMap[s][i].d;//起始地为i到d的目的地
		if(!visited[d])
		{
			int cost = totalCost + cityMap[s][i].t;
			if(cost > K)
				continue;//题目要求走到终点 走到的最短路程
			if(totalLen + cityMap[s][i].l >= minLen || totalLen + cityMap[s][i].l >= minL[d][cost])
				//正在走的路程长度和将要走的路程长度大于最优路长 跳出，
				//正在走的长度和将要走的长度 大于到d点花费的钱的最优路径 跳出
				continue;
			totalCost += cityMap[s][i].t;
			totalLen += cityMap[s][i].l;
			visited[d] = 1;
			minL[d][cost] = totalLen;//到d点花费cost
			dfs(d);
			visited[d] = 0;
			totalCost -= cityMap[s][i].t;
			totalLen -= cityMap[s][i].l;
		}
	}
}
int main()
{
	while(~scanf("%d%d%d",&K,&N,&R))//有K块钱，N个城市，R条路,
	{
		for(int i=0;i<R;++i)
		{
			int s;
			Road r;//建立一个结构体
			scanf("%d%d%d%d",&s,&r.d,&r.l,&r.t);//输入起始地，目的地，路长，路费
			if(s != r.d)//如果起始地和目的地不同 就插入一个数字
				cityMap[s].push_back(r);//尾部 插入数字
		}
		for(int i=0;i<110;++i) 
		{
			for(int j = 0;j<10001;++j)
			{
				minL[i][j] = 1<<30;//花销最大化
			}
		}
		memset(visited,0,sizeof(visited));//每次访问点置0
		totalLen = 0;
		totalCost = 0;
		visited[1] = 1;
		minLen = 1<<30;
		dfs(1);
		if(minLen < (1<<30))
			printf("%d\n",minLen);
		else
			printf("-1\n");
	}
}