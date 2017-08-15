//A - Sharing Cookies
//问你，这个人有A,B块饼干，可以分给三个山羊A,B,(A+B)，只要能平分就可以
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a,b;
	while(~scanf("%d%d",&a,&b))
	{
		int sum =a+b;
		if( a%3 == 0 || b%3 ==0 || sum%3 == 0)
			printf("Possible\n");
		else
			printf("Impossible\n");
	}
}