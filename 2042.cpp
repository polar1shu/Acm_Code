#include <iostream>
using namespace std;
int main()
{
	int a[35];
	a[0]=3;
	for(int i=1;i<31;++i)
	{
		a[i]=(a[i-1]-1)*2;
	}
	int n;
	while(~scanf("%d",&n))
	{
		while(n--)
		{
			int m;
			scanf("%d",&m);
			printf("%d\n",a[m]);
		}
	}
}