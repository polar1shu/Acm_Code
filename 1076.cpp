#include<stdio.h>
int fun(int a,int b)
{
	int i,t,sum;
	sum=0;
	for(i=a;;++i)
	{
		if((i%4 == 0 && i%100 != 0) || (i %400 == 0))
		{
			sum+=1;
		}
		if(sum == b)
		{
			break;
		}
	}
	return i;
}
int main()
{
	int T,Y,N,result;
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			int Y,N;
			scanf("%d%d",&Y,&N);
			result=fun(Y,N);
			printf("%d\n",result);
		}
	}
	return 0;
}