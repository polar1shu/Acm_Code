#include <iostream>
using namespace std;
int main()
{
	int a[30];
	a[1]=0;
	a[2]=1;
	for(int i=3;i<11;++i)
		a[i]=(i-1)*(a[i-1]+a[i-2]);
	int n;
	while(~scanf("%d",&n))
	{
		while(n--)
		{
			int m;
			scanf("%d",&m);
			if(m>10)
				m=10;
			double sum=1.0;
			for(int i=2;i<=m;++i)
				sum*=i;
			printf("%.2lf%%\n",(a[m]*100.0)/sum);
		}
	}
}