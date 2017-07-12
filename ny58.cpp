#include<stdio.h>
int startx,starty,endx,endy;
int a[9][9]={
	1,1,1,1,1,1,1,1,1,
	1,0,0,1,0,0,1,0,1,
	1,0,0,1,1,0,0,0,1,
	1,0,1,0,1,1,0,1,1,
	1,0,0,0,0,1,0,0,1,
	1,1,0,1,0,1,0,0,1,
	1,1,0,1,0,1,0,0,1,
	1,1,0,1,0,0,0,0,1,
	1,1,1,1,1,1,1,1,1,
};
int book[9][9];
int dir[4][2]={
	1,0,
	-1,0,
	0,-1,
	0,1,
};
int minstep;
void dfs(int x,int y,int step)
{
	if(x == endx && y == endy)
	{
		if(minstep>step)
		{
			minstep=step;
			return ;
		}
	}
	int tx,ty,k;
	for(k=0;k<4;++k)
	{
		tx=x+dir[k][0];
		ty=y+dir[k][1];
		if(tx<0 || ty<0 || tx>8 || ty>8)
        	continue;
        if(a[tx][ty] == 0 && book[tx][ty] == 0)
        {
        	book[tx][ty]=1;
        	dfs(tx,ty,step+1);
        	book[tx][ty]=0;
        }
	}
	return ;
}
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		while(n--)
	    {
	    	scanf("%d%d%d%d",&startx,&starty,&endx,&endy);
		    minstep=1e9;
		    dfs(startx,starty,0);
		    printf("%d\n",minstep);
		}
	}
	return 0;
}