#include <iostream>
using namespace std;
int gcd(int x,int y)
{
	for(int i=1;i<=x*y;++i)
	{
		if(i%x == 0 && i%y == 0)
			return i;
	}
	return -1;
}
int max(int x,int y,int z)
{
	if(x>y)
	{
		if(x>z)
			return x;
		else
			return z;
	}
	else
	{
		if(y>z)
			return y;
		else
			return z;
	}
}
int main()
{
	int a,b,c;
	while(~scanf("%d%d%d",&a,&b,&c))
	{
		int sum1=gcd(a,b);
		int sum2=gcd(a,c);
		int sum3=gcd(b,c);
		printf("%d\n",max(sum1,sum2,sum3));
	}
}