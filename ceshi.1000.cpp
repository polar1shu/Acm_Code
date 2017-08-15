#include<stdio.h>
#include<string.h>
using namespace std;
int vis[107][2],g[10][10];
int num;

bool judge(int x,int y,int k)
{
    for(int i=0;i<9;i++)
    {
        if(g[i][y]==k)return false;
        if(g[x][i]==k)return false;
    }
    int xx=(x/3)*3;
    int yy=(y/3)*3;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(g[i+xx][j+yy]==k)
                return false;
    return true;
}

int dfs(int idx)
{
    if(idx<0)return 1;
    for(int i=1;i<=9;i++)
    {
        int x=vis[idx][0];
        int y=vis[idx][1];
        if(judge(x,y,i))
        {
            g[x][y]=i;
            if(dfs(idx-1))return 1;
            g[x][y]=0;
        }
    }
    return 0;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        num=0;
        char c;
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
            {
                scanf(" %c",&c);
                g[i][j]=c-'0';
                if(g[i][j]==0)
                {
                    vis[num][0]=i;
                    vis[num++][1]=j;
                }
            }
        dfs(num-1);
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
                printf("%d",g[i][j]);
            printf("\n");
        }

    }
    return 0;
}
