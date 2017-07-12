#include<stdio.h>
//上下左右是水池的话，无论哪一个方向有都算是一个水池，
//比如{ 0
//   1 1 0
//     1 }这样算一个一个水池
int a[100][100];
int step;
int dir[4][2]={
	1,0,
	-1,0,
	0,-1,
	0,1,
};
int i,j;
int m,n;
void dfs(int i,int j)
{
	int tx,ty,k;
	if(i>=0 && j>=0 && i<m && j<n && a[i][j] == 1)
	{
		a[i][j]=0;
		for(k=0;k<4;++k)
	    {
		    tx = i+dir[k][0];
	        ty = j+dir[k][1];
	        dfs(tx,ty);
	    }
	}
	return ;
}
int main()
{
	int N;
	while(~scanf("%d",&N))
	{
		
		while(N--)
		{
			step=0;
			scanf("%d%d",&m,&n);
			for(i=0;i<m;++i)
			{
			    for(j=0;j<n;++j)
				    scanf("%d",&a[i][j]);
			}
			for(i=0;i<m;++i)
			{
				for(j=0;j<n;++j)
				{
					if(a[i][j] == 1)
						step++;
					dfs(i,j);
				}
			}
			//dfs(0,0,0);
			printf("%d\n",step);

		}
	}
	return 0;
}