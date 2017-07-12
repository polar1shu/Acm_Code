#include <stdio.h>
#include <algorithm>
using namespace std;
typedef long long ll;

bool is_prime[1000010];
bool is_prime_small[1000010];

void segment_sieve(ll a, ll b)
{
    for(int i=0; (ll)i*i<b; i++) is_prime_small[i] = true;//i是素数
    for(int i=0; i<b-a; i++) is_prime[i] = true;
    //利用0~len代表a~b的数
    for(int i=2; (ll)i*i<b; i++)
    {
        if(is_prime_small[i])
        {
            for(int j=i+i; (ll)j*j<b; j+=i)
                is_prime_small[j] = false; //筛[2,√b)
            for(ll j=max(2LL, (a+i-1)/i)*i; j<b; j+=i)
                is_prime[j-a] = false; //筛[a,b)
            //j代表素数，j-a是将a~b变为0~b-a以便数组好存储
            //2LL是2的长整形形式，与其比较意思是j最少是i的两倍
            //((a+i-1)/i)*i得出的是(>=a && %i==0)离a最近的数,其实
            //也可以写成a%i==0 ? a : (a/i+1)*i
        }
    }
}

int main()
{
    ll a, b;

    scanf("%lld%lld", &a,&b);
    segment_sieve(a,b);
    int ans = 0;
    for(ll i=0; i<b-a; i++)
        if(is_prime[i]) printf("%lld ", i+a), ans++;
    printf("\nans=%d\n", ans);
    return 0;
}
