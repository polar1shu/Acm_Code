#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;
int n,k;
int v[100005];
int pre[100005];
int bfs()
{
    memset(v,0,sizeof(v));
    queue<int>q;
    q.push(n);
    v[n]=1;
    pre[n]=0;
    int m,t;
    while(!q.empty())
    {
        m=q.front();
        q.pop();
        if(m == k)
        {
            return pre[m];
        }
        t=m*2;
        if(t<=100000 && t>0 && !v[t])
        {
            v[t]=1;
            pre[t]=pre[m]+1;
            q.push(t);
        }
        t=m+1;
        if(t<=100000 && t>=0 && !v[t])
        {
            v[t]=1;
            pre[t]=pre[m]+1;
            q.push(t);
        }
        t=m-1;
        if(t<=100000 && t>=0 && !v[t])
        {
            v[t]=1;
            pre[t]=pre[m]+1;
            q.push(t);
        }
    }
    return 0;
}
int main()
{
    while(~scanf("%d%d",&n,&k))
    {
        cout<<bfs()<<endl;
    }
}
