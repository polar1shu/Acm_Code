#include<stdio.h>//巴什博弈   有空看看
//如何取胜的法则：如果n=（m+1）r+s，
//（r为任意自然数，s≤m),那么先取者要拿走s个物品，
//如果后取者拿走k（≤m)个，那么先取者再拿走m+1-k个，
//结果剩下（m+1）（r-1）个，以后保持这样的取法，那么先取者肯定获胜。
//总之，要保持给对手留下（m+1）的倍数，就能最后获胜。

int main()
{
    int t;
    while(~scanf("%d",&t))
    {
        while(t--)
        {
            int n,m;
            scanf("%d%d",&n,&m);
            if(n%(m+1) == 0)
                printf("Lose\n");
            else
                printf("Win\n");
        }
    }
    return 0;
}
