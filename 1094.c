#include <stdio.h>
int main()
{
    int t,n,a,sum;
    scanf("%d",&t);

        while (t--)
        {
             scanf("%d",&n);
             sum=0;
             while (n--)
             {
                 scanf("%d",&a);
                 sum+=a;
             }
             if (t!=0)
             printf("%d\n\n",sum);
             else
             printf("%d\n",sum);
        }


    return 0;
}
