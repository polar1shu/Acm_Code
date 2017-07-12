#include<stdio.h>
// 满足这个数是3的倍数就是yes坑啊题意
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        if((n+2)%4 == 0)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
/*1、直接法
 f(0) = 7%3;
 f(1) = 11%3;
 i>=2时
 f(i) = (f(i-1)%3+f(i-2)%3)%3;
 2.数字规律
 前几位数及其余数
 0 1  2  3  4  5  6   7   8
 数7 11 18 29 47 76 123 199 322
 余数1 2  0  2  2  1  0   1   1
 可知观察每四个为一组中第三个为yes
 即 i%4==2或(i-2)%4==0求即可*/