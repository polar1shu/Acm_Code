#include<stdio.h>
//每次拿次方数除2，直到商为1终止，把余数和2分次数加起来就可以了。例如：7次
//原始：2 2 2 2 2 2 2
//1次：2 2 2 | 2 2 2 | 2 （分了1次，余1，第二次二分只需要取3次方，7/2=3）；
//2次：2 |2| 2（又分了1次，余1，此时3/2=1，商为1，不用再二分了）
//则共分了2次，两次余1，则2+2=4，需要分4次。
//同理8次方分3次。
int main()
{
    int m;
    while(~scanf("%d",&m))
    {
        while(m--)
        {
            int n,sum=0;
            scanf("%d",&n);
            while(n!=1)//n等于1的话
            {
                if(n%2 == 0)//n为偶数肯定可以有两个n/2幂相乘
                {
                    n/=2;
                    sum++;
                }
                else
                {
                    n-=1;//n为奇数是要乘以一个2的所以减1
                    sum++;
                }
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}