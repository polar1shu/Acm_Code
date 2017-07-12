#include <iostream>
using namespace std;
//最高效率值  是指一门课的最高效率值
//
int main()
{
	int T;
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			int a[100],n,m;
			scanf("%d%d",&n,&m);
			int min,sum;
			min=1e9;
			for(int i=0;i<n;++i)
			{
				scanf("%d",&a[i]);
				if(min>a[i])
					min=a[i];
			}
			printf("%d\n",(100-min)*(100-min));
		}
	}
}