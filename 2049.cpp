#include <iostream>
using namespace std;
long long fun(int x,int y)
{
	if(x == 0)
		return 1;
	long long sum1,sum2;
	sum1=sum2=1;
	//for(int i=0;i<x;i++,y--)
      //  sum1=sum1*y;
	for(int i=y;i>=y-x+1;--i)
		sum1*=i;
	/*int temp=x;
	while(x--)
    {
        sum2=sum2*temp;
        temp=temp-1;
    }*/
	//printf("%d\n",sum1);
	for(int i=1;i<=x;++i)
		sum2*=i;
	//printf("%d\n",sum2);
	return sum1/sum2;
}
int main()
{
	long long a[25];
	a[0]=a[1]=0;
	a[2]=1;
	a[3]=2;
	for(int i=4;i<25;++i)
		a[i]=(i-1)*(a[i-1]+a[i-2]);
	int n;
	while(~scanf("%d",&n))
	{
		while(n--)
		{
			int x,y;
			scanf("%d%d",&x,&y);
			printf("%lld\n",fun(x-y,x)*a[y]);
		}
	}
}