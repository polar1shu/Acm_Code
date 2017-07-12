#include <iostream>
#include <cstdio>
using namespace std;
int p[2000];
int num = 0;
int is_ps(int i)
{
	if((i/10000 == i%10) && (i/1000%10 == i/10%10) && i<100000)
		return 1;
	else if((i/100000 == i%10) && (i/10000%10 == i/10%10) && (i/1000%10 == i/100%10) && i>100000)
		return 1;
	else 
		return 0;
}
void fun()
{
	for(int i=10000;i<1000000;++i)
	{
		if(is_ps(i))
			p[num++]=i;
	}
}
int solve(int n)
{
	int t=0;
	while(n)
	{
		t+=n%10;
		n/=10;
	}
	return t;
}
int main()
{
	fun();
	int n;
	while(~scanf("%d",&n))
	{
		if(n<5 || n>54)
		{
			printf("-1\n");
			continue;
		}
		for(int i=0;i<num;++i)
		{
			if(solve(p[i]) == n)
				printf("%d\n",p[i]);
		}
	}
}