#include<stdio.h>
#include<string.h>
int a[1000001];
int b[1000001];
int c[1000001];
int main()
{
    int i,j;
    for(i=125; i<=1000000; i++)
    {
        char s[111];
        sprintf(s,"%d",i);
        int n=strlen(s);
        int k=0;
        for(j=0; j<n; j++)
        {
            if(s[j]=='1')
            {
                k=1;
                break;
            }
        }
        if(k==1)
        {
            for(j=0; j<n; j++)
            {
                if(s[j]=='2')
                {
                    k=2;
                    break;
                }
            }
        }
        if(k==2)
        {
            for(j=0; j<n; j++)
            {
                if(s[j]=='5')
                {
                    k=3;
                    if(j+2<n&&s[j+1]=='2'&&s[j+2]=='1')
                        a[i]=2;
                }
            }
        }
        if(a[i]!=2&&k==3)
            a[i]=1;
    }
    int m,n;
    int k=1;
    for(i=124; i<=1000000; i++)
    {
        if(a[i])
            b[i]=b[i-1]+1;
        else
            b[i]=b[i-1];
    }
    for(i=520; i<1000000; i++)
    {
        if(a[i]==2)
            c[i]=c[i-1]+1;
        else
            c[i]=c[i-1];
    }
    while(~scanf("%d%d",&m,&n))
        printf("Case %d:%d %d\n",k++,b[n]-b[m-1],c[n]-c[m-1]);
    return 0;
}
