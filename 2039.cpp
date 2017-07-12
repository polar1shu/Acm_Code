#include <iostream>
using namespace std;
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		while(n--)
		{
			double a,b,c;
			scanf("%lf%lf%lf",&a,&b,&c);
			if((a+b>c) && (a+c>b) && (b+c>a))
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
}//两边之和大于第三边  精度问题