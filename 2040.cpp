#include <iostream>
using namespace std;
int solve(int n)
{
	int sum=0;
	for(int i=1;i<n/2+1;++i)
	{
		if(n%i == 0)
			sum+=i;
	}
	return sum;
}
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		while(n--)
		{
			int a,b;
			scanf("%d%d",&a,&b);
			if(solve(a) == b && a == solve(b))
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
}