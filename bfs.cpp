#include<bits/stdc++.h>
using namespace std;
#define N 105
int n,m;
int ax,ay;//���
int bx,by;//�յ�
bool vis[N][N];//�жϸõ��Ƿ��Ѿ��߹�
char g[N][N];//��ͼ
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};//�����������ķ���
struct node
{
    int x;
    int y;
};
bool bfs()
{
    memset(vis,0,sizeof(vis));///һ��Ҫ��ʼ��
    queue<node>q;
    node A,B;
    A.x=ax;
    A.y=ay;
    q.push(A);
    while(!q.empty())
    {
        A=q.front();
        q.pop();
        for(int i=0;i<n;i++)
        {
            int xx,yy;
            xx=A.x+dir[i][0];
            yy=A.y+dir[i][1];
            if(xx==bx&&yy==by)
                return 1;
            if(xx<0||xx>=n||yy<0||yy>=m)
                continue;
            if(!vis[xx][yy]&&g[xx][yy]!='#')
            {
                vis[xx][yy]=1;
                B.x=xx;
                B.y=yy;
                q.push(B);//ǧ������ҵ����ʵĵ����queue��
            }
        }
    }
    return false;
}
int main()
{
    while(~scanf("%d%d",&n,&m))
    {
        for(int i=0;i<n;i++)
        {
            getchar();
            for(int j=0;j<m;j++)
            {
                scanf("%c",&g[i][j]);
                if(g[i][j]=='A')//���
                {
                    ax=i;
                    ay=j;
                }
                if(g[i][j]=='B')//�յ�
                {
                    bx=i;
                    by=j;
                }
            }
        }
        if(bfs())
        {
            cout<<"YES!"<<endl;
        }
        else cout<<"NO!"<<endl;
    }
}
