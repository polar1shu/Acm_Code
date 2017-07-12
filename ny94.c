#include<stdio.h>
int main()
{
    int t;
    while(~scanf("%d",&t))
    {
        while(t--)
        {
            int n,k,i,t,sum=0;
            scanf("%d%d",&n,&k);//题目意思就是让他每吸完k根就送他一根
            i=n;
            while(i>=k)
            {
                sum+=i/k;//烟的根数增加了多少根
                i=i/k+i%k;//增加的根数够不够再换一次的总和
            }
            printf("%d\n",sum+n);
        }
    }
    return 0;
}
