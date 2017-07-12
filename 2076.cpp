#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	int T;
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			double h,min,ms;
			scanf("%lf%lf%lf",&h,&min,&ms);
			double sum=0.0;
			if(h>12)
				h-=12;
			min+=ms/60.0;
			double x = min*6.0;
			double y = (h+min/60.0)*30.0;
			sum=fabs(y-x);
			if(sum>180)
				sum = 360-sum;
			printf("%d\n",(int)sum);
		}
	}
}