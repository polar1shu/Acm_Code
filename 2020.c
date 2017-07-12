#include<stdio.h>
//#include<math.h>
#include<stdlib.h>
int main()
{
    int i,j;
    int n,t;
    int a[200];
    while (~scanf("%d",&n) && (n!=0))
    {
        for(i=0;i<n;++i)
            scanf("%d",&a[i]);
            for(i=0;i<n-1;++i)
                for (j=1;j<n-i-1;++j)
                {
                    if( abs(a[j-1]) < abs(a[j]) )
                    {
                        t=a[j-1];
                        a[j-1]=a[j];
                        a[j]=t;
                    }
                }

            for(i=0;i<n-1;++i)
                printf("%d ",a[i]);
            if(i==n-1)
                printf("%d\n",a[n-1]);

    }
    return 0;

}
