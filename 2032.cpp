#include <iostream>
using namespace std;
int main()
{
	int a[35][35]={0};
	int n;
	//while(~scanf("%d",&n))
	//{
		for(int i=0;i<35;++i)
		    a[i][0]=1;
		for(int i=0;i<35;++i)
		{
			for(int j=0;j<35;++j)
			{
				if(i == j)
					a[i][j]=1;
			}
		}
		for(int i=2;i<35;++i)
		{
			for(int j=1;j<35;++j)
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
		}
		while(~scanf("%d",&n))
		{
			for(int i=0;i<n;++i)
			{
				for(int j=0;j<i;++j)
				{
					printf("%d ",a[i][j]);
				}
				printf("%d\n",a[i][i]);
			}
			printf("\n");
		}
	//}
}