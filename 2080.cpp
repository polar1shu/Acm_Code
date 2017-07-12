#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
#define PI 3.14159265
int main()
{
	int T;
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			double x1,x2,y1,y2;
			scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
			double a = sqrt(x1*x1 + y1*y1);
			double b = sqrt(x2*x2 + y2*y2);
			double c = sqrt((y2-y1)*(y2-y1) + (x2-x1)*(x2-x1));
			double sum = acos((a*a + b*b - c*c)/(2.0*a*b))*180/PI;
			printf("%.2lf\n",sum);
		}
	}
}