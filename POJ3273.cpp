#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[100001];
int main()
{
	int n,m;
	while(~scanf("%d%d",&n,&m))
	{
		int l,r;
		l=-1;
		r=0;
		for(int i=0;i<n;++i)
		{
			scanf("%d",&a[i]);
			if(l<a[i])
				l=a[i];
			r+=a[i];
		}
		while(l<r)
		{
			int mid = (l+r)/2;
			int num = 0;
			int cost = 0;
			for(int i=0;i<n;++i)
			{
				if(cost + a[i] > mid)
				{
					num++;
					cost=a[i];
				}
				else
					cost+=a[i];
			}
			num++;
			if(num<=m)
				r=mid;
			else
				l=mid+1;
		}
		printf("%d\n",r);
	}
}