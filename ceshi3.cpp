#include <algorithm>
#include <iostream>
#include <stdio.h>
using namespace std;
typedef long long ll;
bool prime[1000100];
bool prime_a[1000100];
int max(ll x,ll y)
{
    return x>y?x:y;
}

void solve(int a, int b)
{
    for(int i=0; (ll)i*i<b; i++) 
    	prime_a[i] = true;
    for(int i=0; i<b-a; i++) 
    	prime[i] = true;
    for(int i=2; (ll)i*i<b; i++)
    {
        if(prime_a[i])
        {
            for(int j=i+i; (ll)j*j<b; j+=i)
                prime_a[j] = false; 
            for(ll j=max(2LL, (a+i-1)/i)*i; j<b; j+=i)
                prime[j-a] = false; 
        }
    }
}

int main()
{
	int a,b;
    while(~scanf("%d%d", &a,&b))
    {
    	solve(a,b);
        int ans = 0;
        for(int i=0; i<b-a; i++)
            if(prime[i])
                 ans++;
        if(a==1)
        	ans--;
        printf("%d\n", ans);
    }
}
