#include <stdio.h>
#include <math.h>
int a[1000000] = {1};
 
void solve()
{
    int t = 1000;
    for(int i = 2; i <= t; ++i)
    {
        if(a[i]) 
        for(int j = i * i; j <= 1000000; j += i)
            a[j] = 0;
    }
}
 
int main()
{
    solve();
    int n,m,i;
    while(~scanf("%d%d",&m,&n))
    {
        int sum=0;
        for(i = m; i <= n; ++i)
            if(!a[i]) 
                sum++;
        if(m == 1)
            sum--;
        printf("%d\n",sum);
    }
    return 0;
}