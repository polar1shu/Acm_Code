#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[10005];
int main()
{
	int N;
	while(~scanf("%d",&N))
	{
		for(int i=0;i<N;++i)
			scanf("%d",&a[i]);
		sort(a,a+N);
		//printf("%d\n",(int)N/2);
			printf("%d\n",a[N/2]);
	}
}
