#include<stdio.h>
int main()
{
    int t,sum,x;
    while (~scanf("%d",&t))
    {
        sum=1;
        while (t--)
        {
            scanf("%d",&x);
            if(x%2 == 1)
                sum*=x;
        }
        printf("%d\n",sum);
    }
    return 0;
}
