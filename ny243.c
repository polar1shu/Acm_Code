#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n) && n)
    {
        int i,j,k,min,t,a[101];
        for(i=0; i<n; ++i)
            scanf("%d",&a[i]);
        min=a[0];
        k=0;
        for(i=0; i<n; ++i)
        {
            if(a[i]<min)
            {
                min=a[i];
                k=i;
            }
        }
        t=a[k];
        a[k]=a[0];
        a[0]=t;
        for(i=0; i<n; ++i)
            printf("%d ",a[i]);
        printf("\n");
    }
    return 0;
}
