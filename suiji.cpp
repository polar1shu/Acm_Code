#include<stdio.h>
int a[20];
int n;
void sort(a[])
{
	n++;
	for(int i=0;i<20;++i)
	{
		for(int j=i;j<20;++j)
		{
			if(a[i]<a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
int main()
{
	int i;
	n=0;
	for(i=0;i<20;++i)
		scanf("%d",&a[i]);
	sort(a);
	printf("%d",n);
	return 0;
}
/*#include<stdio.h>
void sort_one(int array[20])
{
	int i,j,temp;
	i=0;
	while(i!=20)
	{
		j=0;
		while(j<19-i)
		{
			if(array[j+1]>array[j])
			{
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			} 
			j=j+1;
		}
		i=i+1;
	}
 }
int main()
{
	int array[20],i,x;
	i=0;
	while(i!=20)
	{
		scanf("%d",&array[i]);
		i=i+1;
	}
	sort_one(array);
	i=0;
	while(i!=20)
	{
		if(i!=19)
			printf("%d ",array[i]);
		else
		{
			printf("%d",array[i]);
			printf("\n");
		}
		i=i+1;
	}
}/*