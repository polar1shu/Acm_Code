#include <iostream>
using namespace std;
//题目要求最后求的正数x，y可以为负数
//当x为负数时，这时转化为正数，x没少1，对应的y就在改变
long long a,b;
long long x,y;
long long int extgcd(long long a,long long b,long long &x,long long &y)
{
	long long d = a;
	if(b != 0)
	{
		d = extgcd(b,a%b,y,x);
		y -= (a/b)*x;
	}
	else
	{
		x = 1;
		y = 0;
	}
	return d;
}
void solve()
{
	long long res = extgcd(a,b,x,y);
	if(res != 1)
	{
		printf("sorry\n");
		return ;
	}
	else 
	{  
        x %= b;//判断x是否比b大,大的话直接取余数  
        if(x<=0)//如果x小于0，就加上b，用x来反过来推y
        	x += b;//否则就不需要加，直接用x反过来推y  
        printf("%lld %lld\n",x,(1-(x)*a)/b);  
    }  

}
int main()
{
	while(~scanf("%lld%lld",&a,&b))
	{
		solve();
	}
}