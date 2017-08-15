#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int a[1000];
		int longest[1000];
		for(int i=0;i<n;++i)
		{
			scanf("%d",&a[i]);
			longest[i]=1;
		}
		for(int i=1;i<n;++i)
        {
            for(int j=0;j<i;++j)
            {
                if(a[i]>a[j] && longest[i]<longest[j]+1)
                {
                    longest[i]=longest[j]+1;
                }
            }
        }
        int max = 0;
        for(int i=0;i<n;++i)
        {
            if(max<longest[i])
                max=longest[i];
        }
        printf("%d\n",max);

	}
}
/*
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int n;
    int a[100000];
    int longest[100000];
    while(~scanf("%d",&n))
    {
        for(int i=0;i<n;++i)
        {
            scanf("%d",&a[i]);
            longest[i]=1;
        }
        //memset(longest,1,sizeof(longest));
        for(int i=1;i<n;++i)
        {
            for(int j=0;j<i;++j)
            {
                if(a[i]>a[j] && longest[i]<longest[j]+1)
                {
                    longest[i]=longest[j]+1;
                }
            }
        }
        int max = 0;
        for(int i=0;i<n;++i)
        {
            if(max<longest[i])
                max=longest[i];
        }
        printf("%d\n",max);
    }
}

 */