#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
//给你 四个对角线上的点  让你求两个对角线构成的长方形面积
//重合部分面积是多少
//坑：题目没说给你的对角线坐标是主对角线坐标还是副对角线坐标
//要自己判定  排下序，注意换对角线的步骤
void change(double &x,double &y)
{
	double t;
	t=x;
	x=y;
	y=t;
}
int main()
{
	double x1,x2,x3,x4,y1,y2,y3,y4;
	while(~scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4))
	{
		if(x1>x2)
			change(x1,x2);
		if(x3>x4)
			change(x3,x4);
		if(y1>y2)
			change(y1,y2);
		if(y3>y4)
			change(y3,y4);
		double lx,ly,hx,hy;
		lx=max(x1,x3);
		ly=max(y1,y3);
		hx=min(x2,x4);
		hy=min(y2,y4);
		double sum;
		if(lx<=hx && ly<=hy)
			sum=1.0*(fabs(hx-lx)*fabs(hy-ly));
		else
			sum=0.00;
		printf("%.2lf\n",sum);
	}
}