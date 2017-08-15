#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int m;
    int sum = 0;
    int max_num = 0;
    int a[100];
    m=1;
    while(~scanf("%d",&a[0]) && a[0]!=-1)
    {
        sum=0;
        while(scanf("%d",&a[m++]))
        {
            if(a[m-1] == 0)
                break;
        }
        sort(a,a+m);
        for(int i=0;i<m;++i)
        {
            for(int j=i+1;j<m;++j)
            {
                if(a[j] == 2*a[i])
                {
                    sum++;
                    break;
                }
            }
        }
        printf("%d\n",sum);
        m=1;
    }
}