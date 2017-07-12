#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y;
    while(~scanf("%d%d",&x,&y))
    {
        if(x*y)
        {
            if(abs(x*y)+(x*y))
                printf("Signs are not opposot\n");
            else
                printf("Signs are opposite\n");
        }
        else
            printf("Signs can't be sure\n");
    }
    return 0;
}
