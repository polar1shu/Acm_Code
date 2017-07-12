#include <iostream>
using namespace std;
int main()
{
	int m,n;
	while(~scanf("%d%d",&m,&n) && (m || n))
	{
		int flag=0;
		for(int i=0;i<100;++i)
		{
			if((m*100+i)%n == 0)
			{
				if(i<10)
				{
					printf("0%d",i);
				    flag=1;
				}
				else if(i>9 && flag == 1)
					printf(" %d",i);
				else
					printf("%d",i);
				flag=1;//想好 条件
			}
		}
		printf("\n");
	}
}