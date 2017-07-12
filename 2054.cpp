#include <iostream>
#include <string.h>
using namespace std;
void fun(char str[])
{
	int len = strlen(str);
	if(strstr(str,".")!= NULL)
	{
		int i;
		for(i=len-1;str[i]=='0';--i)
			str[i]='\0';
		if(str[i] == '.')
			str[i]='\0';
	}
}
int main()
{
	char a[100010],b[100010];
	while(~scanf("%s%s",a,b))
	{
		fun(a);
		fun(b);
		//if(a.compare(b) == 0)
		if(strcmp(a,b) == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}