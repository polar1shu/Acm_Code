#include <iostream>
using namespace std;
//思路：
//扩展欧几里得算法是在欧几里得的算法基础上求解模线性方程及方程组
//已知ax + by = 1,gcd(a, b) = 1
//所以ax + by = gcd(a, b) ①
//再辗转相除一次后，①变为②
//bx + (a % b)y = gcd(a, b) ②
//a % b = a - (a / b) * b ③
//将③代入②得到④
//bx + (a - (a / b) * b)y = gcd(a, b) ④
//将④化简为⑤
//ay + b(x - (a / b) * y) = gcd(a, b) ⑤

//当b = 0时,显然有 a = gcd(a , b),这时 x = 1, y = 0
//总之，有如下几个等式
// 当 b = 0 时，x = 1, y = 0
// 其他情况 x = y, y = (x - (a / b) * y)
int a,b;
int x,y;
int extgcd(int a,int b,int &x,int &y)
{
	int d = a;
	if(b != 0)
	{
		d=extgcd(b,a%b,y,x);
		y-=(a/b)*x;
	}
	else
	{
		x=1;
		y=0;
	}
	return d;
}
void solve()
{
	int res = extgcd(a,b,x,y);
	if(res != 1)
	{
		printf("-1\n");
	}
	if(x>0)
	{
		printf("%d0",x);
	}
	else
	{
		printf("0%d",x);
	}
	if(y>0)
	{
		printf("%d0\n",y);
	}
	else
	{
		printf("0%d\n",-y);
	}
}
int main()
{
	while(~scanf("%d%d",&a,&b))
	{
		solve();
	}
}