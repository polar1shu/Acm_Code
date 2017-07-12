#include <iostream>
using namespace std;
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		while(n--)
		{
			int a,b;
			scanf("%d%d",&a,&b);
			if(a%b == 0)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
}