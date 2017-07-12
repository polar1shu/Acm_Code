#include <iostream>//求最大公约数
//也叫欧几里德算法
using namespace std;
int gcd(int a,int b)
{
	if(b == 0)
		return a;
	return gcd(b,a%b);
}
int main()
{
	int a,b;
	while(~scanf("%d%d",&a,&b))
	{
		printf("%d\n",gcd(a,b));
	}
}