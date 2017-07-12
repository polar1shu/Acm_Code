#include <stdio.h>
//0也是自然数
//若这个集合没 0 和 1 则 无法得到 所有非负数
//给定一个集合，你可以使用任意一个元素多次。问你该集合能否得到所有的非负数
int main()
{
	int T;
    scanf("%d",&T);//不能用while
	//while(~scanf("%d",&T))
	{
		while(T--)
		{
			int n;
            long long k;
			scanf("%d",&n);
			int flag = 0;
			int cnt = 0;
			for(int i=0;i<n;++i)
			{
                scanf("%lld",&k);
                if(k == 1)
					flag = 1;
				if(k == 0)
					cnt=1;
			
			}
			if(flag && cnt)
				printf("YES\n");
			else 
				printf("NO\n");
		}
	}
	return 0;
}