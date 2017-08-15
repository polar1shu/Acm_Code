#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int a[10005];
int v[10005];
int prim[10005];
int k;
int n;
int sum;

void db()//素数筛
{
	memset(v,1,sizeof(v));
	v[1]=0;
	k = 0;
	for(int i=2;i<10005;++i)
	{
		if(v[i])
		{
			for(int j=2*i;j<10005;j+=i)
			{
				v[j]=0;
			}
			prim[k++]=i;
		}
	}
}
void find(int ans,int num)
{
	if(ans == n)
	{
		sum++;
		return ;
	}
	if(ans + prim[num] > n)
	{
		return ;
	}
	else
	{
		find(ans+prim[num],num+1);
	}
	return ;
}
int main()
{
	db();
	while(~scanf("%d",&n) && n)
	{
		sum = 0;
		for(int i=0;i<k;++i)
		{
			find(0,i);
		}
		printf("%d\n",sum);
	}
}
