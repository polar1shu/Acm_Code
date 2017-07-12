#include <iostream>
using namespace std;
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		while(n--)
		{
			char a[12];
			for(int i=0;i<12;++i)
				scanf("%c",&a[i]);
			printf("6");
			for(int i=7;i<12;++i)
				printf("%c",a[i]);
			printf("\n");
			//scanf("%d",&m);
			//printf("%d\n",m%10000);
		}
	}
}