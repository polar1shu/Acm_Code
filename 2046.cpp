#include <iostream>
using namespace std;
int main()
{
	long long a[55];
	a[1]=1;
	a[2]=2;
	for(int i=3;i<52;++i)
		a[i]=a[i-1]+a[i-2];
	int n;
	while(~scanf("%d",&n))
		printf("%lld\n",a[n]);
}