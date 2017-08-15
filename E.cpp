#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int a[10002];
int v[10002];
int main()
{
	int T;
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			int n;
			scanf("%d",&n);
			memset(a,0,sizeof(a));
			for(int i=0;i<n;++i)
			{
				int m;
				scanf("%d",&m);
				a[m]++;
			}
			int sum=0;
			memset(v,0,sizeof(v));
			/*for(int i=1;i<102;++i)
				printf("%d",a[i]);*/
			for(int i=1;i<10002;++i)
				v[i]=v[i-1]+a[i];
			for(int i=1;i<10002;++i)
			{
				sum+=(a[i]*(a[i]-1)/2);
				/*for(int j=i;j<i+31;++j)
				{
					sum+=a[i]*;
				}*/
				sum+=a[i]*(v[min(10000,i+31)]-v[i]);
			}
			printf("%d\n",sum);
			
		}
	}
}