#include<stdio.h>
int main()
{
    int a,b,c,i;
    while(~scanf("%d%d%d",&a,&b,&c))
    {
        for(i=10;i<101;++i)
        {
            if(i%3 == a && i%5 == b && i%7 == c)
                break;
        }
        printf("%d\n",i);
    }
    return 0;
}
