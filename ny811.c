#include<stdio.h>
int main()
{
    int N;
    while(~scanf("%d",&N))
    {
        int a[10000],t,i,j,m,n,max,min,b[10000]={0};
        for(i=0;i<N;++i)
            scanf("%d",&a[i]);
            n=1;
        for(i=0;i<N;i+=3)
        {
            if((n++)%2 == 0)
            {
                if(a[i]<a[i+1] && a[i]<a[i+2])
                    min=a[i];
                if(a[i+1]<a[i+2] && a[i+1]<a[i])
                    min=a[i+1];
                if(a[i+2]<a[i] && a[i+2]<a[i+1])
                    min=a[i+2];
                b[i]=min;
            }
            else
            {

                if(a[i]>a[i+1] && a[i]>a[i+2])
                    max=a[i];
                if(a[i+1]>a[i+2] && a[i+1]>a[i])
                    max=a[i+1];
                if(a[i+2]>a[i] && a[i+2]>a[i+1])
                    max=a[i+2];
                b[i]=max;
            }
        }
        t=0;
        for(i=0;i<N;i+=3)
            if(b[i]>t)
                t=b[i];
        printf("%d\n",t);
    }
    return 0;
}
