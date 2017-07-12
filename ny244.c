#include<stdio.h>
int main()
{
    int t;
    while(~scanf("%d",&t))
    {
        int a,b;
        char c;
        while(t--)
        {
            scanf("%x%c%x",&a,&c,&b);
            if(c == '+')
                printf("%o\n",a+b);
            if(c == '-')
                printf("%o\n",a-b);
        }
    }
    return 0;
}
