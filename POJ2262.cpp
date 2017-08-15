#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
int v[1000000];
int k;
int n;
int sum;

void db()
{
	memset(v,1,sizeof(v));
	v[1]=0;
	v[0]=0;
	k = 0;
	for(int i=2;i<1000000;++i)
	{
		if(v[i])
		{
			for(int j=2*i;j<1000000;j+=i)
			{
				v[j]=0;
			}
		}
	}
}

int main()
{
	db();
	while(~scanf("%d",&n) && n)
	{
		for(int i=2;i<n;++i)
		{
			if(v[i] && v[n-i])
			{
				printf("%d = %d + %d\n",n,i,n-i);
				break;
			}
		}
	}
}
