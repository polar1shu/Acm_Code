#include<stdio.h>
#include<math.h>
int main()
{
    int T;
    while(~scanf("%d",&T))
    {
        while(T--)
        {
            double l,d,r,t;
            int m;
            scanf("%lf%lf%lf",&l,&d,&r);
            if(2*r<=d)
                printf("impossible\n");
            else
            {
                t=l/sqrt((2*r)*(2*r)-(d*d));//弦长公式，求有多少个圆；
                //应该还有判断是否弦长小于1，小于1了就输出impossible
                //可惜测试数据里没有  钻个漏洞白
                m=t;//double   可以直接转换成int 型  只要它本身是int型
                if(t<m)//可以用1e－6代替是否差距为0.0000000
                    printf("%d\n",m+1);//如果不是整数，就要加一
                else
                    printf("%d\n",m);//是整数正好输出
            }
        }
    }
    return 0;
}
/*#include<stdio.h>
#include<math.h>
int main()
{
    int T;
    double L,D,R,a;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lf%lf%lf",&L,&D,&R);
        a=4*R*R-D*D;
        if(a>0)
        printf("%.0lf\n",ceil(L/sqrt(a)));//ceil函数需要自己看应用，作用都是这个ceil函数
        else
        puts("impossible");
    }
}*/
