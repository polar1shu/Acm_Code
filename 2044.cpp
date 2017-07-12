#include <iostream>
using namespace std;
int main()
{
	int n;
	long long a[55];
	a[1]=1;
	a[2]=2;
	for(int i=3;i<51;++i)
	{
		a[i]=a[i-1]+a[i-2];
	}
	while(~scanf("%d",&n))
	{
		while(n--)
		{
			int x,y;
			scanf("%d%d",&x,&y);
			printf("%lld\n",a[y-x]);
		}
	}
}