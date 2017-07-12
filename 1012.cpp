#include<stdio.h>
int main()
{
	int i,j;
	double sum1,s=1;
	printf("n e\n- -----------\n0 1\n");
	for(i=1;i<10;++i)
	{
		sum1=1.0;
		for(j=i;j>=1;--j)
		{
			sum1*=j;
		}
		s+=1/sum1;
		if(i<2)
		    printf("%d %.0lf\n",i,s);
		else if(i<3)
			printf("%d %.1lf\n",i,s);
		else
			printf("%d %.9lf\n",i,s);


	}
	return 0;
}