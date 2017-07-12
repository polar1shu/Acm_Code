#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	while(~scanf("%d",&T))
	{
		while(T--)
		{
			int n;
			scanf("%d",&n);
			double result=0;
			int i;
			for(i=1;i<=n;++i)
			{
				result+=(log10(i));
			}
			printf("%d\n",(int)result+1);
		}
	}
	return 0;
}
//解析
/*在这之前，我们必须要知道一个知识，任意一个正整数a的位数
等于(int)log10(a) + 1；为什么呢？下面给大家推导一下：

  对于任意一个给定的正整数a，
  假设10^(x-1)<=a<10^x，那么显然a的位数为x位，
  又因为
  log10(10^(x-1))<=log10(a)<(log10(10^x))
  即x-1<=log10(a)<x
  则(int)log10(a)=x-1,
  即(int)log10(a)+1=x
  即a的位数是(int)log10(a)+1

我们知道了一个正整数a的位数等于(int)log10(a) + 1，
现在来求n的阶乘的位数：
假设A=n!=1*2*3*......*n，那么我们要求的就是
(int)log10(A)+1，而：
	log10(A)
        =log10(1*2*3*......n)  （根据log10(a*b) = log10(a) + log10(b)有）
         =log10(1)+log10(2)+log10(3)+......+log10(n)
现在我们终于找到方法，问题解决了，我们将求n的阶乘的位
数分解成了求n个数对10取对数的和，并且对于其中任意一个数，
都在正常的数字范围之类。

总结一下：n的阶乘的位数等于
		  (int)(log10(1)+log10(2)+log10(3)+......+log10(n)) + 1*/