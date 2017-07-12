#include<stdio.h>
int main()
{
    int t;
    while(~scanf("%d",&t))
    {
        while(t--)
        {
            int h;
            scanf("%d",&h);
            if(h<=10)
                printf("1\n");
            else
                printf("%d\n",(h-1)/5);
        }
    }
    return 0;
}
