#include <iostream>
using namespace std;
int prime(int n)
{
	//if(n<2)
	//	return 0;
	for(int i=2;i*i<=n;++i)
	{
		if(n%i == 0)
		    return 0;
	}
	return 1;
}
int main()
{
	int n;
	while(~scanf("%d",&n) && n)
	{
		int sum=0;
		for(int i=2;i<n/2;++i)
		{
			if(prime(i) && prime(n-i))
				sum++;
		}
		printf("%d\n",sum);
	}
}