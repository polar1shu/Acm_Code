#include<stdio.h>
int main()
{
	int n;
	int a[121][121],b[121],i,j;
	for(i=0;i<121;++i)
	{
		a[i][0]=1;
		a[1][i]=1;
		a[0][i]=1;
		a[i][1]=1;
	}
	for(i=2;i<121;++i)
	{
		for(j=2;j<121;++j)
		{
			if(i>=j)
				a[i][j]=a[i][j-1]+a[i-j][j];
			else
				a[i][j]=a[i][i];
		}
	}
	while(~scanf("%d",&n))
		printf("%d\n",a[n][n]);
	return 0;
}
//母函数利用母函数，求（1+x+x^2+...+x^n）*(1+x^2+x^4+...+x^2(n/2))*.......*(1+x^n)展开式x^n项的系数即可。
//http://baike.baidu.com/link?url=CND7-l4tZl9Tp36IVG9lGaISnYYuj9LM3e7Ig257B8FAFMN1Ix5QMVOLo1nasEe1vjqJEsGzOz7reFU37JGqAK
//这种方法用c语言写不可以用C++keyi
/*#include<stdio.h>
int d[125]={1};
int main()
{
    int i,j,n;
    for(i=1;i<=120;++i)
        for(j=i;j<=120;++j)
            d[j]+=d[j-i];
    while(~scanf("%d",&n))
        printf("%d\n",d[n]);
    return 0;
}
#include<iostream>
using namespace std;
int d[125]={1};
int main()
{
	int i,j,n;
	for(i=1;i<=120;i++)
		for(j=i;j<=120;j++)
			d[j]+=d[j-i];
	while(cin>>n)
		cout<<d[n]<<endl;	
}
*/
 