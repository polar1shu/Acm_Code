#include <iostream>
using namespace std;
int n,b;
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
	int x,y,k;
	int d = extgcd(b, 9973, x, y);
    x *= n/d;
    k = 9973/d;
    x = (x%k+k)%k;               //满足条件的最小值 
    printf("%d\n", x%9973);   //B*x = A, B*x/B = x;
}
int main()
{
	int T;
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			scanf("%d%d",&n,&b);
			solve();
		}
	}
}