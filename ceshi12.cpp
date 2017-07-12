#include <iostream>
#include <cmath>
using namespace std;
int fun(int x)
{
	for(int i=2;i<sqrt(x)+1;++i)
	{
		if(x% i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int m = 0;
	int a[5000];
	for(int i=2;i<5000;++i)
	{
		if(fun(i))
		{
			a[m]=i;
			m++;
		}
		//printf("%d\n",m);
	}
	//for(int i=0;i<m;++i)
	//	printf("%d ",a[i]);
	int sum =0;
	for(int k=3;k<300;++k)
	{
		for(int i=0;i<m;++i)
		{
			int t=a[i];
			sum = 1;
			for(int j = i;j<m;++j)
			{
				if(t+k == a[j])
				{
					sum++;
					t=t+k;
				}
				if(sum == 9)
				{
					printf("%d\n",k);
					break;
				}
			}
		}
	}
}