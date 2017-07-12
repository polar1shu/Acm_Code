#include <iostream>
using namespace std;
int main()
{
	int T;
	while(~scanf("%d",&T))
	{
		getchar();
		while(T--)
		{
			char x;
			char y;
			int m;
			int sum=0;
			scanf("%c%c%d",&x,&y,&m);
			getchar();
			if(x>='A' && x<='Z')
				sum+=(x-65+m+1);
			else
				sum+=(-(x-97)+m-1);
			printf("%d\n",sum);
		}
	}
}