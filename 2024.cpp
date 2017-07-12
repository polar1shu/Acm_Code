#include <iostream>
#include <cstring>
using namespace std;
char a[55];
int solve(char a[])
{
	if(!(('a'<=a[0] && a[0] <= 'z') || (a[0] == '_') || ('A'<=a[0] && a[0] <= 'Z')))
		return 0;
	for(int i=1;i<strlen(a);++i)
	{
		if(('a'<=a[i] && a[i] <= 'z') || (a[i] == '_') || ('A'<=a[i] && a[i] <= 'Z') || ('0'<=a[i] && a[i]<='9'))
			continue;
		else
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		getchar();
		while(n--)
		{
			memset(a,0,sizeof(a));
			gets(a);
			if(solve(a))
				printf("yes\n");
			else
				printf("no\n");
		}
	}
}