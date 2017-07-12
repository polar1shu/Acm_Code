#include<stdio.h>
//还有一种快速排幂法  研究研究
int num[100006];
int main()
{
    int n,i;
    num[1]=1;
    for(i=2; i<100006; ++i)
        num[i]=(2*num[i-1]+1)%1000000;
    while(~scanf("%d",&n))
    {
        while(n--)
        {
            long long m;
            scanf("%lld",&m);
            if(m>100005)
            {
                if(m%100000<6)
                    m=100000+m%10;
                else
                    m%=100000;
            }
            printf("%d\n",num[m]);
        }
    }
    return 0;
}
/*对于汉诺塔求移动次数公式为f(n+1)=f(n)*2+1;
 此题如果用要求十进制最后六位，f(n+1)=(f(n)*2+1)%1000000;
 每次输入层数，求出移动次数，但如果输入数据很大，利用此公式必定超时，经过多次测试，发现若输入数据大于100005，有如下规律，如：
 f(123456)=f(23456); f(123456789)=f(23456789)=...=f(56789)
 即略去最高位，
 但 if(m%100000<6)则需进行此操作 m=100000+m%10;
 这样就不会超时了*/
//最优代码
/*#include<stdio.h>
int pm(long long m)
{
    const int p=1000000;
    if(m==1)return 2;
    long long t=pm(m/2);
    return (t*t%p)*((m%2?2:1)%p)%p;
}
int main()
{
    int n;
    long long a;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld",&a);
        printf("%d\n",pm(a)-1);
    }
}*/
/*#include<iostream>
#include<cmath>
using namespace std;

long long pow_mod(long long n)
{
    if(n==1) return 2;
    long long t;
    t=pow_mod(n/2);
    if(n%2==0)
    {
        return ((t%1000000)*(t%1000000))%1000000;
    }
    else
    {
        return (2*(t%1000000)*(t%1000000))%1000000;
    }
}

int main()
{
    int test;
    long long n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        cout<<pow_mod(n)-1<<endl;
    }
    return 0;
}*/
