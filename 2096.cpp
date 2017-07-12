#include <iostream>
using namespace std;
int main()
{
	int T;
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			long long a,b;
			scanf("%lld%lld",&a,&b);
			if(a>100)
				a=a%100;
			if(b>100)
				b=b%100;
			int sum;
			sum=(a+b)%100;
			printf("%d\n",sum);
		}
	}
}