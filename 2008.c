#include<stdio.h>
int main()
{
    int n,j,k,l;
    double  a;
    while (~scanf("%d",&n) && n)
    {
        j = 0;
        k = 0;
        l = 0;
       // if(n == 0)
         //   printf("\n");
        while(n--)
        {
            scanf("%lf",&a);
            if (a<0)
            {
                j+=1;
            }
             else if(a==0)
            {
                k+=1;
            }
             else if(a>0)
            {
                l+=1;
            }
        }
        printf("%d %d %d\n",j,k,l);
    }
    return 0;
}
