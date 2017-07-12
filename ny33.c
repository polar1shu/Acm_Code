#include<stdio.h>
int main()
{
    int a[101][101],i,j,m=0,n;
    scanf("%d",&n);
    for(i=0;i<=n/2;++i)
    {
        for(j=i;j<=n-i-1;++j)
            a[j][n-i-1]=++m;
        for(j=n-i-2;j>=i;--j)
            a[n-i-1][j]=++m;
        for(j=n-i-2;j>=i;--j)
            a[j][i]=++m;
        for(j=i+1;j<=n-i-2;++j)
            a[i][j]=++m;
    }
    for(i=0;i<n;++i)
    {
         for(j=0;j<n;++j)
        printf("%d ",a[i][j]);
        puts("");
    }

    return 0;
}
