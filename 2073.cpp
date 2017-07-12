#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	double a[200][200]={0};
	for(int i=0;i<200;++i)
	{
		a[0][i]=a[i-1][0]+sqrt(i*i+(i-1)*(i-1));
		for(int j=1;j<i+1;++j)
			a[j][i-j]=a[j-1][i-j+1]+sqrt(2.0);
	}
	while(~scanf("%d",&n))
	{
		while(n--)
		{
			int x1,x2,y1,y2;
			scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
			printf("%.3lf\n",fabs(a[x1][y1]-a[x2][y2]));
		}
	}
}