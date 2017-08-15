#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int T;
int main()
{
    int T;
    while(~scanf("%d",&T))
    {
    	while(T--)
    	{
    		int n,cnt=0;
	        scanf("%d",&n);
	        n=n-1;
	        for(int i=1;i*i<=n;i++)
	        {
	            if(n%i==0)
	                cnt+=2;
	            if(i*i==n)
	                cnt--;
	        }
	        printf("%d\n",cnt);
    	}
    }
}