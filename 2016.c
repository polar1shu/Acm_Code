#include<stdio.h>
int main()
{
    int i,j,a[100],t,n,min,temps;
    while(~scanf("%d",&n) && (n!=0))
    {
        for(i=0; i<n; ++i)
            scanf("%d",&a[i]);

        min=a[0];
        for(i=0; i<n; ++i)
        {
            if(min>=a[i])
            {
                min=a[i];
                t=i;
            }

        }

        temps=a[t];
        a[t]=a[0];
        a[0]=temps;
        /*temps=a[0];
        a[0]=a[t];
        a[t] = temps;
        printf("%d",a[0]);
        for(i=1;i<n;++i)
            printf(" %d",a[i]);
        printf("\n");*/

        for(i=0; i<n-1; ++i)
            printf("%d ",a[i]);

            if(i == n-1)
                printf("%d\n",a[i]);
        //printf("\n");
    }
    return 0;
}

