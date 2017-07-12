#include <iostream>
using namespace std;
int main()
{
	int b;
	char a;
	int t=1;
	while(~scanf("%c%d",&a,&b) && a!='@')
	{
		getchar();//很重要
		if(t>1)//除了第一个输出的图形 其他的每个空一行
			printf("\n");
		for(int i=0;i<b-1;++i)//控制打b-1行
		{
			for(int j=0;j<b-i-1;++j)//控制列的空格
				printf(" ");
			printf("%c",a);
			if(i!=0)
			{
				for(int k=0;k<2*(i-1)+1;++k)
					printf(" ");//不是第一行控制中间的空格有多少
			}
			if(i!=0)
				printf("%c",a);//打完空格 就补上a
			printf("\n");
		}
		for(int i=0;i<2*b-1;++i)//打上最后一行的符号
			printf("%c",a);
		printf("\n");
		t++;
	}
}