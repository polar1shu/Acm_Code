#include<stdio.h>
int main()
{
    int m,n,t,a,b,c,j;
    while(~scanf("%d%d",&m,&n))
    {
        j=0;
        //if((m||n)>=999 && (m||n)<=100)
          //  printf("no\n");

        for(int i=m;i<=n;++i)
        {
            a = i/100;
            b = i%100/10;
            c = i%10;
                if (i == (a*a*a)+(b*b*b)+(c*c*c))
                {
                    if (j == 1)
                    printf(" ");
                    printf("%d",i);
                    j =1;
                }

       }
       if (j == 0)
            printf("no\n");
            else
                printf("\n");
    }

        return 0;
}
