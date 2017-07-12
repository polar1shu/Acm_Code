#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long n,m;
	while(~scanf("%lld%lld",&n,&m) && (n || m))
	{
		int t = (int)sqrt(2.0*m);//根据求和公式n*(n+1)/2算出n
		for(int i=t;i>0;--i)//i为子列元素个数 
		{
			int j;//利用求前n项和公式(a1+an)*n／2,算出j
			j=(2.0*m/i-i+1)/2;//算出子列起点
			if(i*(2*j+i-1) == 2*m)//(a1+an)*n／2
				printf("[%d,%d]\n",j,i+j-1);
		}
		printf("\n");
	}
}