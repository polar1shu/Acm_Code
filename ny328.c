#include<stdio.h>
#include<stdlib.h>
//就是判定 坐标差，双奇双偶时 不能覆盖。
//还有就是这个输入太模糊，其实就是当输入是一组测试时不能覆盖
//组合数学上会有证明，大概就是把每个块交替染色，然后如果两个是同奇或同偶的话，染色失败
int main()
{
    int t;
    while(~scanf("%d",&t))
    {
        while(t--)
        {
            int n,m,x1,y1,x2,y2;
            scanf("%d%d",&m,&n);
            if(m%2 == 0 || n%2 == 0)
            {
                scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
                if((abs(x2-x1)+abs(y2-y1))%2 == 0)
                    printf("NO\n");
                else
                    printf("YES\n");
            }
            else
                printf("NO\n");
        }
    }
    return 0;
}
