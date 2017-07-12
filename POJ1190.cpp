#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int N,M;
int v[30];//表示最小体积
int s[30];//表示最小表面积
int area = 0;//表示搭建面积
int minarea = 1<<30;//表示最优表面积
int fun(int m,int r, int h)
{
	int sum = 0;
	for(int i=0;i<m;++i)
	{
		sum += (r-i)*(r-i)*(h-i);
	}
	return sum;
}
void dfs(int n,int m,int r,int h)
{
	if(m == 0)
	{
		if(n)
			return ;
		else
		{
			minarea = min(minarea,area);
			return ;
		}
	}
	if(n<=0)
		return ;
	if(v[m]>n)
		return ;
	if(area + s[m]>=minarea)
		return ;
	if(h<m || r<m)
		return ;
	if(fun(m,r,h)<n)
		return ;
	for(int i = r;i>=m;--i)
	{
		if(m == M)
			area = i*i;
		for(int j = m;j<=h;++j)
		{
			area += 2*i*j;
			dfs(n - i*i*j,m-1,i-1,j-1);
			area -= 2*i*j;
		}
	}
}
int main()
{
	while(~scanf("%d%d",&N,&M))//体积为N,高度为M层
	{
		v[0]=0;
		s[0]=0;
		for(int i=1;i<=M;++i)
		{
			v[i]=v[i-1] + i*i*i;
			s[i]=s[i-1] + 2*i*i;
		}
		if(v[M]>N)
			printf("0\n");
		else
		{
			int maxH = (N-v[M-1])/(M*M)+1;
			int maxR = sqrt(double((N-v[M-1])/M))+1;
			area = 0;
			minarea = 1<<30;
			dfs(N,M,maxR,maxH);
			if(minarea == 1<<30)
				printf("0\n");
			else
				printf("%d\n",minarea);
		}
	}
}