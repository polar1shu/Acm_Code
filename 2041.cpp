#include <iostream>
using namespace std;
int main()
{
	int a[50];
	a[0]=0;
	a[1]=1;
	a[2]=1;
	a[3]=2;
	int sum=0;
	int t1=a[2];
	int t2=a[3];
	for(int i=4;i<42;++i)
	{
		sum=t1+t2;
		a[i]=sum;
		t1=t2;
		t2=sum;
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