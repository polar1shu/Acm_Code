#include <stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            int m,f1,f2,t;
            scanf("%d",&m);
            f1=1;
            f2=2;
            if(m == 1)
                printf("0\n");
            else if(m == 2)
                printf("1\n");
            else if(m == 3)
                printf("2\n");
            else
            {
                m-=3;
            while(m--)
            {
                t=f1+f2;
                f1=f2;
                f2=t;
            }
                 printf("%d\n",t);
            }
        }
    }
    return 0;
}
/*“因为只能走上一级或者2级
所以f（n）=f（n-1）+f（n-2)
列个数列就出来了

问题:
一个简单的数学问题
有一楼梯共10级，如果每次只能跨上1级或2级，要登上第十级，共有（ ）种不同走法？

最佳答案:
若只有1级楼梯有一种方法。
2级楼梯就会有两种方法。
...
n级楼梯，若先走1步，则下面还剩下n-1级楼梯
如果先走2步，下面还剩下n-2级楼梯
所以走n级楼梯的方法总数是n-1级楼梯的方法总数加上n-2级楼梯的方法总数。
即3级楼梯等于1级楼梯方法数加上2级楼梯方法数 为1＋2＝3种
4级楼梯等于2级楼梯方法数加上3级楼梯方法数 为2＋3＝5种
5级楼梯 3＋5＝8种
6级楼梯 5＋8＝13种
7级楼梯 8＋13＝21种
即下一项的种数为前一项的加上等号前面的哪个数，
依次类推10级时有89种”*/

