#include <iostream>
using namespace std;
//方法一：转成十进制计算 再转化成十六进制计算（麻烦）
//方法二：直接按十六进制每位运算
//方法三：格式输出
int main()
{
	long long a,b;
	while(~scanf("%llX%llX",&a,&b))
	{
		if(a+b>=0)
			printf("%llX\n",a+b);
		else
			printf("-%llX\n",-(a+b));
	}
}