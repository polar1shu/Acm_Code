#include<stdio.h>
/*依据我的思路：
第一轮：能被m整除的数全加1
第二轮：能被m^2整除的全加1
......
直到m^x大于n
最后进行累加

那么这里面隐含了这样一个思路：
如果将最后的求加法合并起来，有
第一轮，被加1的数量为n/m
第二轮，在第一轮基础上被加1的数量为n/m^2
......
知道n<m^x*/
int main()
{
    int s;
    while(~scanf("%d",&s))
    {
        while(s--)
        {
            int m,n,b;
            scanf("%d%d",&n,&m);
            b=0;
            while(n)
            {
                n/=m;//计算n中有多少个能够整除m^2的数
                b+=n;//计算n中有多少个能整除m的数
            }
            printf("%d\n",b);
        }
    }
    return 0;
}
/*******************
 //题目意思
 n的阶乘中最多能分解出多少个m相乘
 例如：n=100 m=5；
 100当中有
 5，10，15，20，25，30，35，40，45，50，
 55，60，65，70，75，80，85，90，95，100
 这些数能够整除5
 其中25，50，75，100
 能够整除5^2,即能够整除25，因此可以分解出2个5.
 又因为第一遍时已经加过一次了
 所以最多能够分解出20+4个5
 ********************/