#include <iostream>
#include <cmath>
using namespace std;
//题意 有 n 盏 灯，进行n 次操控
//每i次操控编号为第i次操控的倍数的灯，求最后一盏灯亮还是灭
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		double sum = sqrt(n*1.0);
		printf("%d\n",sum==int(sum)?1:0);
	}
}