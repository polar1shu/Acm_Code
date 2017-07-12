#include <iostream>
using namespace std;
int main()
{
	char a[5000];
	char b[5000];
	while(~scanf("%s%s",a,b))
	{
		int sum1,sum2;
		int x=strlen(a);
		int y=strlen(b);
		for(int i=0;i<x;++i)
		{
			if(a[i] == '-')
				sum1++;
			if(b[i] == '-')
				sum2++;
		}
		if(x!=y || sum1!=sum2)
			printf("-1\n");
		int n,m,sum=0;
		for(;;)
		{
			while(n<x&&a[n++]='-');
			while(m<y&&b[m++]='-');
			if(a[n]>b[m])
				sum+=n-m;
			
		}

	}
}