#include<stdio.h>
#include<string.h>
int main()
{
    int t,m=0,i,j,n;
    char a[16][26],temp[26];
    while(~scanf("%d",&n) && n)
    {
        for(i=0;i<n;++i)
            scanf("\n%s",a[i]);
        for(i=0;i<n-1;++i)
            for(j=0;j<n-i-1;++j)
            {
                if(strlen(a[j])>strlen(a[j+1]))
                {
                    strcpy(temp,a[j]);
                    strcpy(a[j],a[j+1]);
                    strcpy(a[j+1],temp);
                }
            }
        printf("SET %d\n",++m);
        for(i=0;i<n;i+=2)
            printf("%s\n",a[i]);
        if(n%2 == 0)
            n=n-1;
        else
            n=n-2;
        for(i=n;i>=1;i-=2)
            printf("%s\n",a[i]);
    }
    return 0;
}
