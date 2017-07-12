#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n;
	char a[200];
	while(~scanf("%d",&n))
	{
	    //scanf("%d",&n);
		getchar();
		while(n--)
		{
			//getchar();
			//char a[200];
			//scanf("%s",a);
			//getchar();
			gets(a);
			int sum=0;
			for(int i=0;i<strlen(a);++i)
			{
				if(a[i]<0)
					sum++;
			}
			printf("%d\n",sum/2);
		}
	}
}