#include <iostream>
using namespace std;
int main()
{
   long long a[55];
	a[1]=3;
	a[2]=6;
	a[3]=6;
	for(int i=4;i<55;++i)
		a[i]=a[i-1]+2*a[i-2];
	int n;
	while(~scanf("%d",&n))
	{
		printf("%lld\n",a[n]);
	}
}//先求出首尾同色的可能   然后再减去首尾同色的可能