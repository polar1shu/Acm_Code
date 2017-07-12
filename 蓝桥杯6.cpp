#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char a[1001],b[1001];
	while(~scanf("%s%s",a,b))
	{
		int sum = 0;
		for(int i=0;i<strlen(a);++i)
		{
			if(a[i] != b[i])
			{
				if(a[i+1] == '*')
					a[i+1] = 'o';
				else 
					a[i+1] = '*';
				sum++;
			}
		}
		printf("%d\n",sum);
	}
}