#include<stdio.h>
int main()
{
    int n,a,b,max;
    while(~scanf("%d",&n) && n != 0)
    {

        max=0;
        while(n--)
        {

            scanf("%d%d",&a,&b);
            if(a+b>max)
                max=a+b;
        }
        printf("%d\n",max);
    }
    return 0;
}
