#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while(~scanf("%d%d",&n,&m) && (m || n))
	{
		int sum=1;
		for(int i=0;i<m;++i)
		{
			sum*=n;
			sum%=1000;
		}
		printf("%d\n",sum);
	}
}