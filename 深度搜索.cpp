#include <stdio.h>
int n ;
int a[100] ;
int vst[100] ;

void dfs(int cur)
{
    int i,k ;
    if(cur == n+1)
    {
        for(k = 1 ;k<=n ;k++)
        {
            printf("%d",a[k]) ;
        }
        printf("\n") ;
        return ;
    }
    for(i = 1 ;i<=n ;i++)
    {
        if(!vst[i])
        {
            a[cur] = i ;
            vst[i] = 1 ;
            dfs(cur+1) ;
            vst[i] = 0 ;
        }
    }
}

int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        dfs(1) ;
    }
    return 0 ;
}