#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	while(~scanf("%d",&n) && n)
	{
		int i;
		long long a[600001];
		for(int i=1;;++i)
		{
			a[i]=a[i/2]*10+i%2;
			if(a[i]%n == 0)
			{
				printf("%lld\n",a[i]);
				break;
			}
		}
	}
}