#include <iostream>
using namespace std;
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int a[50];
		int i;
		for(i=0;n!=0;++i)
		{
			a[i]=n%2;
			n=n/2;
		}
		for(int j=i-1;j>=0;--j)
			printf("%d",a[j]);
		printf("\n");
	}
}