#include <iostream>
using namespace std;
void solve(char a[],int n)
{
	int x=0,y=n-1;
	int sum=0;
	while(x<=y)
	{
		bool left = false;
		for(int i=0;x+i<=y;++i)
		{
			if(a[x+i]<a[y-i])
			{
				left = true;
				break;
			}
			else if(a[x+i]>a[y-i])
			{
				left = false;
				break;
			}
		}
		if(left)
		{
			putchar(a[x++]);
			sum++;
		}
		else
		{
			putchar(a[y--]);
			sum++;
		}
		if(sum == 80)
		{
			putchar('\n');
			sum=0;
		}
	}
	putchar('\n');
}
int main()
{
	int n;
	char a[2002];
	scanf("%d",&n);
	getchar();//吞回车
	for(int i=0;i<n;++i)
	{
		a[i]=getchar();//接收字符
		getchar();//吞回车
	}
	//puts(a);
	solve(a,n);
}