#include<stdio.h>
int main()
{
    int n,k;
    while(~scanf("%d%d",&n,&k) && n != 0 && k != 0)
    {
        int i,flag;
        flag=0;
        for(i=1; i<=n/2; ++i)
        {
            if(k == (n-i)*i)
            {
                flag=1;
                break;
            }
        }

        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
