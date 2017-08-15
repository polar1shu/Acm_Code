#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[1001];
int v[1001];
int find(int n)
{
	if(n != a[n])
		return a[n]=find(a[n]);
	return a[n];
}
int main()
{
	int n,edge;
	while(~scanf("%d",&n) && n)
	{
		scanf("%d",&edge);
		int sum = n-1;
		for(int i=0;i<=n;++i)
			a[i]=i;
		for(int i=0;i<edge;++i)
		{
			int x,y;
			scanf("%d%d",&x,&y);
			x=find(x);
			y=find(y);
			if(x != y)
			{
				a[y]=x;
				sum--;
			}
		}
		printf("%d\n",sum);
	}
}