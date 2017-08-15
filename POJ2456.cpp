#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int n,c;
int a[100001];
int fun(int mid)
{
	int cnt=1;
	int m=a[0];
	for(int i=1;i<n; i++)
    {
        if(a[i]-m>=mid)
        {
            cnt++;
            m=a[i];
        }
        if(cnt>=c)
            return true;
    }
    return false;
}
int main()
{
	while(~scanf("%d%d",&n,&c))
	{
		for(int i=0;i<n;++i)
			scanf("%d",&a[i]);
		sort(a,a+n);
		int mid,l,r;
		l=0;
		r=a[n-1];
		while(l+1<r)
		{
			mid=(l+r)/2;
			if(fun(mid))
				l=mid;
			else
				r=mid;
		}
		printf("%d\n",l);
	}
}