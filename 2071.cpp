#include <iostream>
using namespace std;
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		while(n--)
		{
			int m;
			scanf("%d",&m);
			double a[200];
			for (int i = 0; i < m; ++i)
			{
				scanf("%lf",&a[i]);
			}
			double max=0;
			for(int i=0;i<m;++i)
			{
				if(a[i]>max)
					max=a[i];
			}
			printf("%.2lf\n",max);
		}
	}
}