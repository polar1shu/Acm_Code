#include<stdio.h>
#include<math.h>
int main()
{
    int n,f[25],i,k;
    double x,y;
    f[0]=0;f[1]=1;
    for(i=2;i<21;++i)
        f[i]=f[i-1]+f[i-2];
    while(~scanf("%d",&n))
    {
        if(n<=20)
            printf("%d\n",f[n]);
        else
        {
            x=n*log10(0.5+0.5*sqrt(5))-log10(sqrt(5));
            k=x;
            y=x-k;
            x=pow(10.0,y);
            k=x*1000;
            printf("%d\n",k);
        }
    }
    return 0;
}
/*算法分析：f(n)= (1/sqrt(5))*pow((1+sqrt(5))/2,n) -  (1/sqrt(5))*pow((1-sqrt(5))/2,n);
这个题目就是用到这个公式，化简f(n)=n*log10((1+sqrt(5))/2)-log10(sqrt(5))+log10(1-((1-sqrt(5))/(1+sqrt(5)))^n)后面部分是无穷小量，可以省略。
于是f(n)=n*log10((1+sqrt(5))/2)-log10(sqrt(5))；
 思路：斐波那契数列的通项公式为:http://baike.baidu.com/link?url=zE5ECT1fXdtfaZBk1Cfpxn68S9GLazC5Z1k0ZlgBp_jjx72k3t606xTd9uSgVuN-gGDeEfJyTeNQiUQMzrkXlK
 然后下一步考虑如何产生前4位：
 先看对数的性质,loga(b^c)=c*loga(b),loga(b*c)=loga(b)+loga(c);假设给出一个数10234432,
 那么log10(10234432)=log10(1.0234432*10^7)【用科学记数法表示这个数】=log10(1.0234432)+7;
 log10(1.0234432)就是log10(10234432)的小数部分.
 log10(1.0234432)=0.010063744(取对数所产生的数一定是个小数)
 再取一次幂:10^0.010063744=1.023443198，然后减去整数部分，剩下的就是小数部分，让取前4位，只需要将小数部分*1000就好了*/
