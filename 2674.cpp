#include <iostream>
using namespace std;
long long fun(int n)
{
	long long sum = 1;
	for(int i = n;i>0;--i)
	{
		sum*=i;
		sum%=2009;
	}
	return sum;
}
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		if(n == 0)
			printf("1\n");
		else if(n > 41)
			printf("0\n");
		else
		printf("%lld\n",fun(n));
	}
}