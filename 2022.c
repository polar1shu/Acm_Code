#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,i,j,s,max,x,y;
    while(~scanf("%d%d",&m,&n) && n!=0 && m!=0)
    {
        max=0;
        for(i=1; i<=m; ++i)
            for(j=1;j<=n;++j)
        {
             scanf("%d",&s);
             if(abs(s)>abs(max))
             {
                 max=s;
                 x=i;
                 y=j;
             }

        }
        printf("%d %d %d\n",x,y,max);

    }
     return 0;
}
