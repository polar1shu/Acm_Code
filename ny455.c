#include<stdio.h>
int main()
{
    int m;
    while(~scanf("%d",&m))
    {
        while(m--)
        {
            int n;
            scanf("%d",&n);
            printf("%d\n",n);
        }
    }
    return 0;
}
