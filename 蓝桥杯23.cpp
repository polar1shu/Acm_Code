#include <iostream>
using namespace std;
int main()
{
	long long n,k,T;
	while(~scanf("%lld%lld%lld",&n,&k,&T))
	{
		long long sum = 1;
		long long temp = 1;
		long long r = n;
		long long f = 1;
		for(long long i = 1;i<T;++i)
		{
			temp+=(r+f)*n/2;
			temp%=k;
			sum+=temp;
			f = 1 + i*n;
			r = n + i*n;
		}
		printf("%lld\n",sum);
	}
}