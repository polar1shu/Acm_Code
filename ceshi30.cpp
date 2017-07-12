#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<2)
		printf("NO\n");
	int i;
	for(i =2;i<n;++i)
	{
		if(n%i == 0)
		{
			printf("NO\n");
			break;
		}
	}
	if(i == n)
		printf("YES\n");
	return 0;
}