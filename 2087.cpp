#include <iostream>
#include <cstring>
using namespace std;
//KMP算法
int main()
{
	char a[1000],b[1000];
	while(~scanf("%s",a) && a[0]!='#')
	{
		//getchar();
		scanf("%s",b);
		int sum=0;
		for(int i=0;i<strlen(a);i+=strlen(b))
		{
			int flag=1;
			for(int j=0;j<strlen(b);++j)
			{
				if(a[i+j]!=b[j])
				{
					flag=0;
					break;
				}
			}
			if(flag)
				sum++;
		}
		printf("%d\n",sum);
	}
}