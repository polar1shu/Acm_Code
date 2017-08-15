#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[102];
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int T;
	while(~scanf("%d",&T))
	{
		while(T--)
		{

			int k,m,n;
			scanf("%d%d%d",&k,&m,&n);
			int sum = 0;
			for(int i=1;i<=n;++i)
			{
				scanf("%d",&a[i]);
				sum+=a[i];
			}
			int ans = k - sum;
			sort(a+1,a+n+1,cmp);
			if(ans>=m)
			{
				printf("0\n");
				continue;
			}
			for(int i=1;i<=n;++i)
			{
				ans+=a[i];
				if(ans>=m)
				{
					printf("%d\n",i);
					break;
				}
			}
		}
	}
}