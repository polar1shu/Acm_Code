#include<stdio.h>
int main()
{
    int m,n;
    int a[101]={0},b[101]={0},i=0,j=0;
    while(~scanf("%d%d",&m,&n) && m && n)
    {

        if(a[m] == 0)
        {
            b[i++]=m;
            //b[a[i]]+=n;
        }
        a[m]+=n;
    }
    for(j=0;j<i;++j)
        printf("%d %d\n",b[j],a[b[j]]);
    return 0;

}
