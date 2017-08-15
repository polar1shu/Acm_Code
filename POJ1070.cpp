#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	while(~scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f))
	{
		if(!a || !b ||!c || !d || !e || !f)
			break;
		int sum = 0;
		sum=sum+d+e+f+ceil(c/4);
		
	}
}