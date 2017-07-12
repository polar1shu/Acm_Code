#include<stdio.h>
//题意  坐标从前两个开始先输出  从第二个坐标开始动   
//注意可以往回走  考虑所有情况左右走时左走逆时针右走顺时针
//上下走时 上逆时针  下顺时针
int main()
{
	char a[201];
	while(~scanf("%s",a))
	{
		printf("300 420 moveto\n310 420 lineto\n");
		int t=2;
		int x=310;
		int y=420;
		for(int i=0;a[i]!='\0';++i)
		{
			if(a[i] == 'A')
			{
				t--;
				if(t == 0)
					t=4;
			}
			else
			{
				t++;
				if(t>4)
					t=1;
			}
			if(t == 1)
			{
				y-=10;
				printf("%d %d lineto\n",x,y);
			}
			else if(t == 2)
			{
				x+=10;
				printf("%d %d lineto\n",x,y);
			}
			else if(t == 3)
			{
				y+=10;
				printf("%d %d lineto\n",x,y);
			}
			else
			{
				x-=10;
				printf("%d %d lineto\n",x,y);
			}
		}
		printf("stroke\nshowpage\n");
	}
	return 0;
}