#include <iostream>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;
int v[10000];
int prime[10000];
int a,b;
int num[10000];
void prime_num()
{
	int i,j;
	for(i=1000;i<=10000;++i)
	{
		for(j=2;j<i;++j)
		{
			if(i%j == 0)
			{
				prime[i]=0;
				break;
			}
		}
		if( j == i)
			prime[i]=1;
	}
}
int bfs(int start,int end)
{
	memset(num,0,sizeof(num));
	queue<int> q;
	q.push(start);
	v[start]=1;
	int m,k;
	int anss;
	int step=0;
	int d[4];
	int temp;
	while(!q.empty())
	{
		m=q.front();
		q.pop();
		d[0]=m/1000;
		d[1]=m%1000/100;
		d[2]=m%100/10;
		d[3]=m%10;
		//printf("%d %d %d %d \n",d[0],d[1],d[2],d[3]);
		for(int i=0;i<4;++i)
		{
			temp = d[i];
			for(int j=0;j<10;++j)
			{
				if(j!=temp)
				{
					d[i]=j;
					anss=d[0]*1000+d[1]*100+d[2]*10+d[3];
					//printf("%d\n",anss);
					if(!v[anss] && prime[anss])
					{
						num[anss]=num[m]+1;
						v[anss]=1;
						q.push(anss);
					}
					if(anss == end)
						return num[anss];
				}
			}
			d[i]=temp;
		}
		if(m == end)
			return num[m];
	}
	return -1;

}
int main()
{
	int T;
	prime_num();
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			scanf("%d%d",&a,&b);
			memset(v,0,sizeof(v));
			int ans = bfs(a,b);
			if(ans!=-1)
				printf("%d\n",ans);
			else
				printf("Impossible.\n");
		}
	}

}