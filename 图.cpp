/*0 1 0 0
  0 1 0 0
  0 0 0 0
  0 0 0 0
  迷宫 1障碍物 0平地

给定任意两个点  起点0 0   终点  求最小步数
*/
#include<stdio.h>
int a[10][10],book[10][10];
int minstep;
int i,j,n,m;
int startx,starty,endx,endy;
int dir[4][2]={
	1,0,
	-1,0,
	0,1,
	0,-1,
};//代表是方向[？][0]是x轴 [?][1]是y轴；
void dfs(int x,int y,int step)
{
	if(x == endx && y == endy)
	{
		if(minstep>step)
		{
			minstep=step;//如果初末位置相同 则minstep被赋值
			return ;
		}
	}
	int tx,ty,k;//必须在这里定义k，具体原因不知道，变量位置问题
	for(k=0;k<4;++k)
	{
		tx = x+dir[k][0] ; //一开始tx为0，代表x轴前进还是后退
		ty = y+dir[k][1];//一开始ty为0，代表y轴前进还是后退
        if(tx<0 || ty<0 || tx>n-1 || ty>m-1)
        	continue;//越界这一圈直接跳出进行下一圈
        if(a[tx][ty] == 0 && book[tx][ty] == 0)
        {
        	book[tx][ty]=1;//模拟路径，走过的不再走了
        	dfs(tx,ty,step+1);//尝试下一个点，核心算法
        	book[tx][ty]=0;//上一层底柜模拟路径退后一步，置0
        }
	}
	return ;//无返回值防止死循环
}
int main()
{
	while(~scanf("%d%d",&n,&m))//输入有多少行多少列
	{
		for(i=0;i<n;++i)
		{
			for(j=0;j<m;++j)
				scanf("%d",&a[i][j]);//输入每行每列的数
		}
		scanf("%d%d%d%d",&startx,&starty,&endx,&endy);
	    //输入起始坐标（startx,starty）结束坐标(endx,endy);
		minstep=1e9;//初始化minstep的值  无穷大
		dfs(startx,starty,0);//开始递归算法
		printf("%d\n",minstep);//输出最小步数
	}
	return 0;
}