#include <iostream>
using namespace std;
int main()
{
	int n,k;
	while(~scanf("%d%d",&n,&k))
	{
		int a[1002]={0};
		//int b[1002]={1};
		int count = 0;
		for(int i=0;i<n;++i)
			scanf("%d",&a[i]);
		for(int i=0;i<n;++i)
		{
			int temp = k;
			while(a[i]<temp)
			{
				temp-=a[i];
				i++;
			}
			count++;
		}
		printf("%d\n",count);
	}
}