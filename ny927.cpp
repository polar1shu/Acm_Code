#include<stdio.h>
int a[20];
int count;
int ok,k,N;
void dfs(int pos)
{
//两种写法  但上边的写法时间用量明显少	
	/*if(count>k)
		return ;
	if(k == count)
	{
		ok=1;
		return ;
	}*/
	if(count>=k)
	{
		if(k == count)
		{
			ok=1;
		}
		return ;//加上就可以不超时
	}
	for(int i=pos;i<N;++i)
	{
		count+=a[i];
		dfs(i+1);
		count-=a[i];
	}
}
int main()
{
	while(~scanf("%d",&N))
	{
		int i;
		for(i=0;i<N;++i)
			scanf("%d",&a[i]);
		scanf("%d",&k);
		ok = 0;
		dfs(0);
		count = 0;
		if(ok)
			printf("Of course,I can!\n");
		else
			printf("Sorry,I can't!\n");
	}
	return 0;
}