#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int N;
	while(~scanf("%d",&N))
	{
		while(N--)
		{
			int n,max;
			int m;
			int temp;
			max = 0;
			scanf("%d",&n);
			scanf("%d",&m);
			int sum = m;
			max = m;
			while(--n)
			{
				//sum += m;
				//printf("%d\n",sum);
				scanf("%d",&temp);
				if(sum > 0)
					sum += temp;
				else
					sum = temp;
				if(max < sum)
					max = sum;
			}
			printf("%d\n",max);	
		}
	}
}
