#include<stdio.h>
int main()
{
    int n,i,j,t;
    int a[100];
    double aver,sum;
    while (~scanf("%d",&n))
    {
        sum=0;
        aver=0;
        //if((n<=2) && (n>100))
          //  printf("\n");
        //while(n--)
        //{
            for(i=0;i<n;++i)
                scanf("%d",&a[i]);

            for(i=0;i<n;++i)
            {
                for(j=0;j<=n-i-1;++j)
                {
                    if (a[j-1]>a[j])
                    {
                        t=a[j-1];
                        a[j-1]=a[j];
                        a[j]=t;
                    }
                }
            }
            //for(i = 0; i < n; ++i)
              //  printf("%d ",a[i]);

            for(i=1;i<n-1;++i)
                sum+=a[i];
            aver=sum/(n-2);
            printf("%.2lf\n",aver);
        //}
    }
    return 0;
}
