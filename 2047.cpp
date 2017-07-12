#include <iostream>
using namespace std;
int main()
{
	long long a[55];
	a[1]=3;
	a[2]=8;
	for(int i=3;i<55;++i)
		a[i]=(a[i-1]+a[i-2])*2;
	int n;
	while(~scanf("%d",&n))
		printf("%lld\n",a[n]);
}
/*
设n位字符串，最后一位是O的字符串的个数为a[n],最后一位不是O的字符串的个数是b[n],
总字符串个数为x[n]，
则有
x[n]=a[n]+b[n];
a[n]=b[n-1];
b[n]=2*x[n-1];
====>x[n]=2*x[n-1]+2*x[n-2]
*/