#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
#define PI acos(-1.0)
int main()
{
	int N;
	while(~scanf("%d",&N))
	{
		int num = 1;
		while(N--)
		{
			double x,y;
			scanf("%lf%lf",&x,&y);
			double r = double(x*x+y*y);
			double area = r*PI/2.0;
			int year = (int)(1+area/50.0);
			printf("Property %d: This property will begin eroding in year %d.\n",num++,year);
		}
		printf("END OF OUTPUT.\n");
	}
}