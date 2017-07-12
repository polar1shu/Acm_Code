#include<stdio.h>
//意思就是给你三种硬币，1 2 5
//输入三种硬币各多少个  然后输出凑不成最小的数
//还有一种是母函数解的  待研究
int main()
{
	int a,b,c;
	while(~scanf("%d%d%d",&a,&b,&c) && (a || b || c))
	{
		if(a == 0)
			printf("1\n");
		else if(a+2*b<4)
			printf("%d\n",a+2*b+1);
		else
			printf("%d\n",a+2*b+5*c+1);
	}
	return 0;
}