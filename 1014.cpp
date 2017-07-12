#include <iostream>
using namespace std;
int fun(long long  a,long long b)
{
	for(int i=2;i<=a && i<=b ;++i)
	{
		if(a % i == 0 && b % i ==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	long long a,b;
	while(~scanf("%lld%lld",&a,&b))
	{
		printf("%10lld%10lld    ",a,b);
		if(fun(a,b))
			printf("Good Choice\n\n");
		else 
			printf("Bad Choice\n\n");
	}
}