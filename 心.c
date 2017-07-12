#include <stdio.h>
int main(void)
{
    float x,y;
    float m,n;
    for (y=2;y>=-2;y-=0.12)
    {
        for (x=-1.2;x<=1.2;x+=0.05)
        {
            if(((x*x+y*y-1)*(x*x+y*y-1)*(x*x+y*y-1)-x*x*y*y*y)<=0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
