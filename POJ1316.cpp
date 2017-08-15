#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int a[20001];
int main()
{
	memset(a,0,sizeof(a));
	for(int i=1;i<=10000;++i)
	{
		a[i/1000+i/100%10+i/10%10+i%10+i]=1;
		if(!a[i])
			printf("%d\n",i);
	}
}