#include <iostream>
using namespace std;
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		while(n--)
		{
			int m;
			scanf("%d",&m);
			printf("%d\n",2*m*m-m+1);
		}
	}
}//折线的两条射线连接到方块上 顶点不能在方块的边上