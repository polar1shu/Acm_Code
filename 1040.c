#include<stdio.h>
int main()
{
    int i,j,m,n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            int a[1000];
            scanf("%d",&m);
            for(i=0; i<m; i++)
                scanf("%d",&a[i]);
            for(i=0; i<m; i++)
            {
                for(j=i; j<m; j++)
                {
                    if(a[i]>a[j])
                    {
                        int t;
                        t=a[i];
                        a[i]=a[j];
                        a[j]=t;
                    }
                }
            }
            for(i=0; i<m; i++)
            {
                if(i==0)
                    printf("%d",a[i]);
                else
                    printf(" %d",a[i]);
            }
            printf("\n");

        }
    }

}
//c＋＋版
/*#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
int main()
{
    int i,m,n,a[2000];
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            scanf("%d",&m);
            for(i=0;i<m;++i)
               scanf("%d",&a[i]);
            sort(a+1,a+m+1);
            for(i=0;i<m;++i)
            {
                if(i == m-1)
                    printf("%d\n",a[i]);
                else
                    printf("%d ",a[i]);
            }
        }
    }
    return 0;
}*/

