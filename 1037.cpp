#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(~scanf("%d%d%d",&a,&b,&c))
	{
		int sum1 = a<b?a:b;
		int sum2 = sum1<c?sum1:c;
		if(sum2<=168)
			printf("CRASH %d\n",sum2);
		else
			printf("NO CRASH\n");
	}
}