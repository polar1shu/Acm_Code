#include<stdio.h>
int main()
{
    int m,n,t,x,y;
    while (~scanf("%d%d",&m,&n))
    {
        x = 0;
        y = 0;
        if(m>n)
        {
            t=m;
            m=n;
            n=t;
        }

        for(int i=m;i<=n;++i)
        {
            if(i%2 == 0)
                x+=i*i;
            else
                y+=i*i*i;
        }
            printf("%d %d\n",x,y);
    }
    return 0;

}
