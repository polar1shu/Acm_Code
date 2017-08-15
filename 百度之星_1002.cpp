#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
	int n,m;
	while(~scanf("%d%d",&n,&m))
	{
		int a[3000];
		int u,v,w;
		int ans = 0x3f3f3f3f;
		for(int i=0;i<m;++i)
		{
			scanf("%d%d%d",&u,&v,&w);
			if(u != v)
			{
				a[u]+=w;
				a[v]+=w;
			}
		}
		for(int i=1;i<=n;++i)
			ans=min(ans,a[i]);
		printf("%d\n",ans);
	}
}