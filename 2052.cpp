#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while(~scanf("%d%d",&m,&n))
	{
		//char a[75][75]={'0'};
		//不赋值的话 它🈶️可能等于任意值
		char a[75][75];
		a[0][0]='+';
		a[n+1][0]='+';
		a[n+1][m+1]='+';
		a[0][m+1]='+';
		for(int i=1;i<m+1;++i)
		{
			a[0][i]='-';
			a[n+1][i]='-';
		}
		for(int j=1;j<n+1;++j)
		{
			a[j][0]='|';
			a[j][m+1]='|';
		}
		for(int i=1;i<n+1;i++)
            for(int j=1;j<m+1;j++)
                a[i][j]=' ';
		for(int i=0;i<n+2;++i)
		{
			for(int j=0;j<m+2;++j)
			{
				//if(a[i][j] != '\0')
					printf("%c",a[i][j]);
				//else 
				//	printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}
}