#include <iostream>
using namespace std;//数学题 推公式
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		double A0,An;
		scanf("%lf%lf",&A0,&An);
		double A1 = n*A0+An;
		double sum = 0;
		for(int i=0;i<n;++i)
		{
			double c;
			scanf("%lf",&c);
			sum=sum + (n-i)*c;
		}
		A1 = (A1-2*sum)/(n+1);
		printf("%.2lf\n",A1);
	}
}