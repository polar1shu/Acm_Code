#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
long long gcd(long long  a,long long  b)
{
	if(b == 0)
		return a;
	return gcd(b,a%b);
}
int main()
{
	int N;
	while(~scanf("%d",&N))
	{
		long long a[200];
		for(int i=0;i<N;++i)
		{
			scanf("%lld",&a[i]);
		}
		long long k;
		sort(a,a+N);
		long long  temp = a[0];
		for(int i=1;i<N;++i)
		{
			k = gcd(temp,a[i]);
			temp = temp/k;
			temp*=a[i];
		}
		printf("%lld\n",temp);
	}
}