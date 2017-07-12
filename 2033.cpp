#include <iostream>
using namespace std;
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		while(n--)
		{
			long long AH,AM,AS,BH,BM,BS;
			scanf("%lld%lld%lld%lld%lld%lld",&AH,&AM,&AS,&BH,&BM,&BS);
			int flag1,flag2;
			flag1= flag2 =0;
			long long sum3,sum1,sum2;
			sum1=sum2=sum3=0;
			if((AS + BS)>=60)
			{
				flag1=(AS+BS)/60;
			    sum1=(AS+BS)%60;
			}
			else
				sum1=AS+BS;
			if((AM + BM+flag1)>=60)
			{
				flag2=(AM+BM+flag1)/60;
			    sum2=(AM+BM+flag1)%60;
			}
			else
				sum2=AM+BM+flag1;
			sum3=AH+BH+flag2;
			printf("%lld %lld %lld\n",sum3,sum2,sum1);
		}
	}
}