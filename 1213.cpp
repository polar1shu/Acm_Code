#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int v[1001];
struct Node
{
    int parent;
    int id;
    int rank;
}node[1001];
void makeset(int n)
{
    for(int i=0;i<n;++i)
    {
        node[i].parent=node[i].id=i;
        node[i].rank=0;
        v[i]=0;
    }
}
int findset(int n)
{
    if(n!=node[n].parent)
    {
        node[n].parent=findset(node[n].parent);
    }
    return node[n].parent;
}
void union_a(int x,int y)
{
    x=findset(x);
    y=findset(y);
    if(x == y)
        return;
    if(node[x].rank>=node[y].rank)
    {
        node[y].parent=x;
    }
    else
    {
        node[x].parent=y;
        if(node[x].rank == node[y].rank)
        {
            node[y].rank++;
        }
    }
}
int main()
{
    int T;
    while(~scanf("%d",&T))
    {
        while(T--)
        {
            int n,m;
            scanf("%d%d",&n,&m);
            makeset(n);
            for(int i=0;i<m;++i)
            {
                int x,y;
                scanf("%d%d",&x,&y);
                --x;
                --y;
                union_a(x,y);
            }
            int sum = 0;
            for(int i=0;i<n;++i)
            {
                int temp = findset(i);
                if(!v[temp])
                {
                    v[temp]=1;
                    sum++;
                }
            }
            printf("%d\n",sum);
        }
    }
}