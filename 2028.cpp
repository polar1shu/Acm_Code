#include <iostream>
using namespace std;
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int a[1000];
		for(int i=0;i<n;++i)
			scanf("%d",&a[i]);
		int sum=a[0];
		for(int i=1;;++i)
		{
			sum=a[0]*i;
			int k=0;
			for(int j=0;j<n;++j)
			{
				if(sum%a[j] == 0)
					k++;
			}
			if(k == n)
			{
				printf("%d\n",sum);
				break;
			}
		}
	}
}