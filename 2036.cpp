#include <iostream>
using namespace std;
int main()
{
	int n;
	while(~scanf("%d",&n) && n)
	{
		int a[105],b[105];
		for(int i=0;i<n;++i)
			scanf("%d%d",&a[i],&b[i]);
		int x1=a[0],y1=b[0];
		int x2,y2,x3,y3;
		double sum=0;
		for(int i=1;i<n-1;++i)
		{
			x2 = a[i];
			y2 = b[i];
			x3 = a[i+1];
		    y3 = b[i+1];
			sum+=(x2*y3 + x1*y2 + x3*y1 - x3*y2 - x2*y1 -x1*y3)/2.0;
		}
		printf("%.1lf\n",sum);
	}
}
//求不规则n边形的面积  有公式 在文稿里