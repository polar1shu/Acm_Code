#include <iostream>
using namespace std;
long long fun(long long n)
{
	long long sum = 1;
	for(int i=1;i<=n;++i)
		sum*=i;
	return sum;
}
int main()
{
	int b[18]={0};
	int a[18]={0,2,3,11,6,17,12,1,10,8,5,13,7,9,15,4,14,16};
	long long sum =0;
	int count = 0;
	for(int i=1;i<18;++i)
	{
		count = 0;
		for(int j=i+1;j<18;++j)
		{
			/*(j == a[i])
			{
				b[j]=1;
				break;
			}*/
			//if(b[j] == 0)
			//	count++;
			if(a[i]>a[j])
				count++;
		}
		sum+=(count)*fun(17-i);
	}
	printf("%lld\n",sum);
}