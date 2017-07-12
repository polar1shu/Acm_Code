#include <iostream>
using namespace std;
//意思是元素不改变一开始的位置 按顺序选元素 然后看着几个元素全排列是否是可以构成递增序列
//因为是递增序列  因为是连续递增的是序列  所以元素数字之间的差也是元素位置之间的差
int main()
{
	int n;
	int a[60000];
	while(~scanf("%d",&n))
	{
		int sum = 0;
		for(int i=0;i<n;++i)
			scanf("%d",&a[i]);
		for(int i=0;i<n;++i)
		{
			int max = 1;
			int min = n;
			for(int j=i;j<n;++j)
			{
				if(min>a[j])
					min = a[j];
				if(max<a[j])
					max = a[j];
				if(max - min == j - i)
					sum++;
			}
		}
		printf("%d\n",sum);
	}
}