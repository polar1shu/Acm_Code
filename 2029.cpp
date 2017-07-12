#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		while(n--)
		{
			char a[1000];
	        scanf("%s",a);
	        int k = strlen(a);
	        int flag = 1;
	        for(int i=0;i<k/2;++i)
	        {
	        	if(a[i]!=a[k-i-1])
	        	{
	        		flag = 0;
	        	}
	        }
	        if(flag)
	        	printf("yes\n");
	        else 
	        	printf("no\n");
		}
	}
}