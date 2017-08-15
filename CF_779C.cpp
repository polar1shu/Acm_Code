#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct node
{
	int x,y,z;
}p[200005];
bool cmp(node a,node b)
{
	return a.z<b.z;
}
int main()
{
	int n,k;
	while(~scanf("%d%d",&n,&k))
	{
		int sum = 0;
		for(int i=0;i<n;++i)
		{
			scanf("%d",&p[i].x);
		}
		for(int i=0;i<n;++i)
		{
			scanf("%d",&p[i].y);
		}
		for(int i=0;i<n;++i)
			p[i].z=p[i].x-p[i].y;
		sort(p,p+n,cmp);
		for(int i=0;i<n;++i)
		{
			if(i<k)
				sum+=p[i].x;
			/*else if(p[i].z<0)
				sum+=p[i].x;*/
			else
				sum+=min(p[i].y,p[i].x);
		}
		printf("%d\n",sum);
		/*for(int i=0;i<n;++i)
			printf("%.lf ",p[i].x);
		printf("\n");
		for(int i=0;i<n;++i)
			printf("%.lf ",p[i].y);
		printf("\n");*/
	}
}