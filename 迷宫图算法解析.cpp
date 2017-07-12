/*0 1 0 0
0 1 0 0
0 0 0 0

标记路径 

int dir[4][2] = {
  1,0,   
  -1,0,
  0,-1,
  0,1
} ;

map[x][y] =  ;
x+dir[0][0] ;
y+dir[0][1] ;

x y ;  dfs(x,y) ;

int minStep = 1e9 ;

void dfs(int x,int y,int step)
if(x == endx && y == endy)
{
   if(step<minStep)
   minStep = step ;
   return ;
}
for(i = 0 ;i<4 ;i++)
{
  tx = x+dir[i][0] ;  
  ty = y+dir[i][1] ;
  if(tx<0 || ty<0 || tx>n-1 || ty>m-1)
  {
     越界
	 continue ;
  }
  if(book[tx][ty]==0  && map[tx][ty]==0)
  {
     可以走 ;
	 book[tx][ty] = 1 ;
	 dfs(tx,ty,step+1) ;
	 book[tx][ty] = 0 ;
	 
 } 
}
return ;

int main()
{
  n ,m ;
  for{
    for{
	  map[i][j] ;
	}
  }
  输入起点和终点坐标
  4个int
  dfs(起点x,起点y,0) ;
  printf("minStep") ;  //最小
}



0 1 0 0
0 1 0 0
0 0 0 0
0 0 2 1)
  map[tx][ty] ;
}




book[x][y] = {0} ;
book[x][y] = 1 ;

迷宫 1障碍物 0平地

给定任意两个点  起点0 0   终点  求最小步数

搜索 1 状态树
图*/
#include <stdio.h>
int a[5][5],book[5][5] ;
int n,m ;//n行m列
int i, j ;
int startx,starty,endx,endy ;  //起点和终点的坐标
int minStep ;

int dir[4][2] = {
    -1,0,//Users/apple/Desktop/新建文本文档.txt
    1,0,
    0,-1,
    0,1
} ;

void dfs(int x,int y,int step)
{
    if(x == endx && y == endy)
    {
        if(minStep>step)
            minStep = step ;
        return  ;
    }
    int tx,ty,k ;
    for(k = 0 ;k<4 ;k++)
    {
        tx = x+dir[k][0] ;
        ty = y+dir[k][1] ;
        if(tx<0 || ty<0 || tx>n-1 || ty>m-1)
            continue ;
        if(a[tx][ty] == 0 && book[tx][ty] == 0)
        {
            book[tx][ty] = 1 ;
            dfs(tx,ty,step+1) ;//尝试下一个点
            book[tx][ty] = 0 ;
        }
    }
    return ;
}

int main()
{
    while(scanf("%d%d",&n,&m)!=0)
    {
        for(i = 0 ;i<n ;i++)
        {
            for(j = 0 ;j<m ;j++)
                scanf("%d",&a[i][j]) ;
        }
        scanf("%d%d%d%d",&startx,&starty,&endx,&endy) ;  //读入起点和终点坐标
        minStep = 1e9 ;
        dfs(startx,starty,0) ;
        printf("最小步数是%d\n",minStep) ;
    }
    return 0 ;
}

