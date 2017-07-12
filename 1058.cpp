#include<stdio.h>
//题目意思就是第一个数是1，乘以2,3,5,7,取最小值，最小的就是下一个数
//动态规划算法
int a[6000],b[6000];
int n;
int main()
{
	int i,min,temp1,temp2,m1,m2,m3,m4;
	a[1]=1;
	m1=m2=m3=m4=1;
	for(i=2;i<5843;++i)
	{
        temp1=2*a[m1]<3*a[m2]?2*a[m1]:3*a[m2];//设置变量temp1取a[1]最小的值的取值
        temp2=5*a[m3]<7*a[m4]?5*a[m3]:7*a[m4];//设置变量temp2取a[1]最小的值的取值
        min=temp1<temp2?temp1:temp2;//比较两个变量的大小取最小的一个
        a[i]=min;
        if(a[i] == 2*a[m1])//增加的是a[i]的值而不是单纯的i的值
            m1++;           //这样就能保证某个数的质因数一定满足条件
        if(a[i] == 3*a[m2])//代表的是这个数已经被找到了，这个因子也没用了  进行下一次比较
        	m2++;
        if(a[i] == 5*a[m3])
        	m3++;
        if(a[i] == 7*a[m4])
        	m4++;
	}
	while(~scanf("%d",&n) && n)
	{
		
		if(n%10 == 1 && n%100 != 11)
			printf("The %dst humble number is %d.\n",n,a[n]);
		else if(n%10 == 2 && n%100 != 12)
			printf("The %dnd humble number is %d.\n",n,a[n]);
		else if(n%10 == 3 && n%100 != 13)
			printf("The %drd humble number is %d.\n",n,a[n]);
		else 
			printf("The %dth humble number is %d.\n",n,a[n]);
	}
	return 0;
}