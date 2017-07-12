#include <iostream>
#include <cstring>
using namespace std;
int solve(char a[])
{
	for(int i=0;i<strlen(a);++i)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			//printf("1\n");
			return 1;
			break;
		}
	}
	return 0;
}
int solve_1(char a[])
{
	for(int i=0;i<strlen(a);++i)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			return 1;
			break;
		}
	}
	return 0;
}
int solve_2(char a[])
{
	for(int i=0;i<strlen(a);++i)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			return 1;
			break;
		}
	}
	return 0;
}
int solve_3(char s[])
{
	for(int i=0;i<strlen(s);++i)
	{
		if(s[i]=='~'||s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^')
		{
			return 1;
			break;
		}
	}
	return 0;
}

int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		getchar();
		while(n--)
		{
			char a[55];
			int flag=0;
			int flag_1=0;
			gets(a);
			//getchar();
			//printf("%d\n",solve(a));
			//printf("%s\n",a);
			if(strlen(a)<=16 && strlen(a)>=8)
				flag_1=1;
			if(solve(a) == 1)
			{
				flag++;
				//printf("%d\n",flag);
			}
			if(solve_1(a) == 1)
				flag++;
			if(solve_2(a) == 1)
				flag++;
			if(solve_3(a) == 1)
				flag++;
			//printf("%d%d%d%d%d",flag_1,solve(a),solve_3(a),solve_2(a),solve_1(a));
			//printf("%d\n",flag);
			if(flag_1 == 1 && flag>=3)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
}