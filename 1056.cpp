#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	double n;
	while(~scanf("%lf",&n) && n)
	{
		double sum = 0.0;
		for(int i=2;i<500;++i)
		{
			sum+=1.0/i;
			if(sum>=n)
			{
				printf("%d card(s)\n",i-1);
				break;
			}
		}
	}
}