#include<stdio.h>
#include<string.h>
int flag = 1;
char a[11],b[1001];
int m;
void fun(int temp)
{
	flag = 1;
	for(int i=0;i<m;++i)
	{
		if(b[temp] == a[i])
		{
			temp+=1;
		}
		else
		{
			flag = 0;
			break;
		}
	}
}
int main()
{
	int N;
	while(~scanf("%d",&N))
	{
		while(N--)
		{
			//for(int i=0;a[i]!='\0';++i)
				scanf("%s",a);
			//for(int i=0;b[i]!='\0';++i)
				scanf("%s",b);
		    m=strlen(a);
		    int n=strlen(b);
		    int sum = 0;
		    for(int i=0;i<n;++i)
		    {
		    	fun(i);
		    	if(flag == 1)
		    		sum++;
		    }
		    printf("%d\n",sum);
		}
	}
	return 0;
}