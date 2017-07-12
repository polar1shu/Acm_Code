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
//和70一样。。。
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
                n/=m;
                b+=n;
            }
            printf("%d\n",b);
        }
    }
    return 0;
}
