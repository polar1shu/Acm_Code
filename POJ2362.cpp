#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int a[210];
int L;
int v[210];
int sum;
int m;
int dfs(int x,int y,int z)//x代表的是组成了几条边，y表示还剩几个棍子，z表示边长
{
	if(x == 3)
		return 1;
	for(int i = y;i>=0;--i)
	{
		if(!v[i])
		{
			v[i]=1;
			if(z+a[i] < sum/4)
			{
				if(dfs(x,i-1,z+a[i]))
					return 1;
			}
			else if(z+a[i] == sum/4)
			{
				if(dfs(x+1,m-1,0))
					return 1;
			}
			v[i]=0;
		}
	}
	return 0;
}
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		while(n--)
	    {
		    //int m;
			scanf("%d",&m);
			//int sum = 0;
			sum = 0;
			for(int i = 0;i<m;++i)
			{
				scanf("%d",&a[i]);
				sum += a[i];
			}
			memset(v,0,sizeof(v));
			sort(a,a+m);
			L = sum/4;
			if((sum/4)*4 != sum || a[m-1]>sum/4)
			//if(L*4 != sum || a[m-1]>L)
			{
				printf("no\n");
				continue;
			}
			if(dfs(0,m-1,0))
				printf("yes\n");
			else
				printf("no\n");
	    }
	}
}