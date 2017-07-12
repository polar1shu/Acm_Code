#include <iostream>
//#include <cstring>
using namespace std;
int main()
{
	int a,b;
	while(~scanf("%d%d",&a,&b)) //&& (a || b))
	{
		if(a == 0 && b == 0)
			return 0;
		int A[105],B[105];
		for(int i=0;i<a;++i)
			scanf("%d",&A[i]);
		for(int i=0;i<b;++i)
			scanf("%d",&B[i]);
		int flag = 1;
		int k=0;
		int c[105];
		int count=0;
		for(int i=0;i<a;++i)
		{
			for(int j=0;j<b;++j)
			{
				if(A[i]==B[j])
				{
					flag = 0;
				}
			}
			if(flag == 1)
				c[k++]=A[i];
			else
				count++;
			flag=1;
		}
		int t = 0;
		if(count == a)
			printf("NULL");
		else
		for(int i=0;i<k;i++)
		{
			for(int j=i+1;j<k;j++)
			{
				if(c[i]>c[j])//排序错了
				{
				    t = c[i];
				    c[i]=c[j];
				    c[j]=t;	
				}
			}
		}
	    for(int i=0;i<k;++i)
			printf("%d ",c[i]);
		printf("\n");
	}
}