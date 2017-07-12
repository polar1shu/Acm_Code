#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
int a[2000010];
int main()
{
    int i,j,m,n;
    for(i=2; i<=2000000; ++i)
    {
        if(a[i] == 0)
            //利用数组的下标，将i的倍数全部筛掉
            for(j=i+i; j<=2000000; j+=i)
                a[j]=1;
    }
    while(~scanf("%d",&n) && n)
    {
        for(i=2; i<=n; ++i)
        {
            if(a[i] == 0)
                printf("%d ",i);
        }
        puts("");
    }
    return 0;
}
//http://www.cnblogs.com/zhengbin/p/4362788.html
//算法  枚举法不行超时
