#include <iostream>
using namespace std;
int main()
{
	int N;
	while(~scanf("%d",&N))
	{
		while(N--)
		{
			int K;
			scanf("%d",&K);
			char name[40];
			double s,c;//  必须 double型  不然OTL
			int flag = 1;
			double sum = 0.0;
			double sum1 = 0.0;
			for(int i=0;i<K;++i)
			{
				scanf("%s%lf%lf",name,&c,&s);
				if(s<60)
					flag=0;
				sum+=1.0*s*c;
				sum1+=c;
			}
			if(flag == 1)
				printf("%.2lf\n",sum/sum1);
			else
				printf("Sorry!\n");
			if(N!=0)
				printf("\n");
		}
	}
}