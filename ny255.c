#include<stdio.h>
int main()
{
    int T;
    while(~scanf("%d",&T))
    {
        while(T--)
        {
            int a[101],i,j,t,m,n,min=0;
            scanf("%d",&n);
            for(i=0; i<n; ++i)
                scanf("%d",&a[i]);
            for(i=0; i<n; ++i)
            {
                for(j=1; j<n-i; ++j)
                {
                    if(a[j-1]>a[j])
                    {
                        t=a[j-1];
                        a[j-1]=a[j];
                        a[j]=t;
                    }
                }
            }
            for(i=0; i<n; ++i)
            {
                if(n == 3)
                {
                    if(a[0] == a[1])
                    {
                        if(a[1] == a[2])
                        {
                            n--;
                            n--;
                            break;
                        }
                        a[1]=a[2];
                        n--;
                        break;
                    }
                }
                if(a[i] == a[i+1])
                {
                    for(j=i; j<n; ++j)
                        a[j]=a[j+1];
                    n--;
                    i=0;
                }
            }
            printf("%d\n",n);
            for(i=0; i<n; ++i)
                printf("%d ",a[i]);
            printf("\n");
        }
    }
    return 0;
}
/*#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    while (N--)
    {
        int a[1000] = {0}, t, s, i, n;
        scanf("%d", &n);
        for (int i = 0; i< n; i++)
        {
            scanf("%d", &t);
            a[t] = 1;
        }
        s = 0;
        for (int i = 0; i < 1000; i++)
        {
            if (a[i] != 0)
                s++;
        }
        printf("%d\n", s);
        for (int i = 0; i < 1000; i++)
        {
            if (a[i] != 0)
                printf("%d ", i);
        }
        printf("\n");
    }
}*/
