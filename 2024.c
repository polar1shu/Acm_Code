#include<stdio.h>
int main()
{
    int i,j,n,m,k,s;
    double a[55][6],b[55],c[10],sum;
    while(~scanf("%d%d",&n,&m))
    {
        for(i=1; i<=n; ++i)
            for(j=1; j<=m; ++j)
                scanf("%lf",&a[i][j]);

        for(i=1; i<=n; ++i)
        {
            sum=0;
            for(j=1; j<=m; ++j)
            {
                sum+=a[i][j];
            }
            b[i]=sum/m;
        }

        for(j=1; j<=m; ++j)
        {
            sum = 0;
            for(i=1; i<=n; ++i)
            {
                sum+=a[i][j];
            }
            c[j]=sum/n;
        }

        s=0;
        for(i=1; i<=n; ++i)
        {
            k=0;
            for(j=1; j<=m; ++j)
            {
                if(a[i][j]<c[j])
                {
                    k=1;
                    break;
                }

            }
            if(k == 0)
                s++;
        }

        printf("%.2lf",b[1]);
        for(i=2; i<=n; ++i)
            printf(" %.2lf",b[i]);
        printf("\n");
        printf("%.2lf",c[1]);
        for(i=2; i<=m; ++i)
            printf(" %.2lf",c[i]);
        printf("\n");
        printf("%d\n\n",s);

    }
    return 0;
}
