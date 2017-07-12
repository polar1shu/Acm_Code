#include <stdio.h>
int main()
{
    int num[41][2], i;
    int n, m;
    num[2][0] = 2; // 长度为2，结尾为0的数目
    num[2][1] = 1; // 长度为2，结尾为1的数目
    for(i=3;i<41;i++)
    {
        num[i][0] = num[i-1][1] + num[i-1][0]; // 转移方程
        num[i][1] = num[i-1][0]; // 转移方程
    }
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        printf("%d\n",num[m][0]+num[m][1]);
    }
    return 0;
}
/*#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
	int a[43]={0};
	a[2]=3;
	a[3]=5;
    for(int i=4;i<43;++i)
    	a[i]=a[i-1]+a[i-2];
	int n;
	while(cin>>n)
	{
		while(n--)
		{
			int m;
			cin>>m;
			cout<<a[m]<<endl;
			//scanf("%d",&m);
			//printf("%d\n",a[m]);
		}
	}
}*/