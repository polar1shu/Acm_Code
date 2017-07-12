/*
题意：有n个棍子，是由不知道多少根棍子随机砍断得到的
求可以组成最短长度的n个棍子
思路：因为所有破碎的棍子都是由棍子砍断得来的
所以这个最短长度的棍子一定比砍断后的棍子的长度长
又由于不是一根 所以至少有两根棍子 所以 一根棍子的长度肯定小于sum/2
接下来dfs(n个碎棍子，最短棍子的长度)求每个棍子有可能的长度
dfs(当前余下的棍子个数，还缺de长度)
剪枝一：如果第i个棍子没用上，因为不符合最优，所以试了下一个棍子
如果下一根棍子和上一根一样长，则就就直接continue
剪枝二：如果还缺的长度正好与求得棍子最短长度相同或者缺的长度和
砍断的棍子中有一段正好相同 这种方法也是错的
不要想着换掉第一根棍子就能成功
这样想，说明这是新一根原棒，还没有进行匹配），而在预先判断匹配与否时已经判断不能匹配，
这样都不能匹配，那么说明以后都不能匹配了
剪枝三：因为如果拼的木棍 发现和差的拼的棍子长度相同会发现 此时这个棍子的是可以拼好的
但是 后续的棍子却拼不好了 如果此时不用这个棍子那么 它会出现在后面的棍子里这个时候 肯定不能这么拼 直接就pass掉
不要希望换掉最后一根棍子就能成功
这样想如果当前木棍能恰好填满一根原始木棍，但因剩余的木棍无法组合出合法解而返回，那么让我们考虑接下来的两种策略，
一是用更长的木棍来代替当前木棍，显然这样总长度会超过原始木棍的长度，违法。二是用更短的木棍组合来代替这根木棍，
他们的总长恰好是当前木棍的长度，但是由于这些替代木棍在后面的搜索中无法得到合法解，当前木棍也不可能替代这些木棍组合出合法解。
因为当前木棍的做的事这些替代木棍也能做到。所以，当出现加上某根木棍恰好能填满一根原始木棍，但由在后面的搜索中失败了，
就不必考虑其他木棍了，直接退出当前的枚举。
剪枝四：如果拼一个棍子的时候 发现这个棍子已经拼过一截了  
没有必要从头再开始找 合理的棍子 因为拼的棍子 应该一截比一截短
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <functional>//greater<int>的头文件
using namespace std;
//#include <bits/stdc++>  
using namespace std;
vector<int>a;//定义数组a
//int a[70];
int n;//n表示有多少个碎片
int L;//全局变量 传递想拼的长度
int lastnum = 0;//记录最后一个棍子的位置
int v[70];//记录是否被用过
/*bool cmp(int x,int y)
{  
    return x>y;
}*/  
int dfs(int r,int m)//r表示还剩多少个碎片，m表示还差的现在拼的棍子长度
{
	if(r == 0 && m == 0)
		return 1;
	if(m == 0)//拼完
		m = L;
	int s = 0;
	if(m != L)//剪枝四
         //m和L相同 就说明它还没开始拼 要从头扫 
		//而 不同的话 就说明它已经拼过一截了 可以从用的那一截开始找
		s = lastnum+1;
	for(int i = s;i<n;++i)
	{
		//if(!v[i-1] && i>1 && a[i] == a[i-1])
		//	continue;
		//if(!v[i] && a[i] <= m)
		if(!v[i] && a[i]<=m)
		{
			if(i>0)
			{
				if(!v[i-1] && a[i] == a[i-1])//剪枝一
					continue;
			}
			v[i] = 1;
			lastnum = i;
			if(dfs(r-1,m-a[i]))
				return 1;
			else
			{
				v[i] = 0;
				if(a[i] == m || m == L)//剪枝三，二,如果用的第一个和最后一个都失败了
					//那么  剩下的 就不用尝试了
					return 0;
		    }
		}
	}
	return 0;
}
int main()
{
	while(~scanf("%d",&n) && n)
	{
		int sum = 0;
		a.clear();
		int lmax = -1;
		//memset(a,0,sizeof(a));
		for(int i=0;i<n;++i)
		{
			int r;
			scanf("%d",&r);
			a.push_back(r);
			//scanf("%d",&a[i]);
			if(a[i]>lmax) 
				lmax=a[i];
			sum += a[i];
		}
		//int flag = 0;
		sort(a.begin(),a.end(),greater<int>());//排序，从大到小
		//sort(a+1,a+1+n,cmp);
		int i=0;
		for(i = lmax;i<=sum/2;++i)
		{
			if(sum%i)
				continue;
			//flag = i;
			L = i;
			memset(v,0,sizeof(v));
			lastnum = 0;
			if(dfs(n,i))
			{
				printf("%d\n",i);
				break;
			}
		}
		if(i > sum/2)
		//if(i>sum/2)
			printf("%d\n",sum);
	}
}
/*#include<stdio.h>  
#include<string.h>  
#include<iostream>  
#include<algorithm>  
#include<vector>  
#include<map>  
using namespace std;  
#define maxn 70  
int a[maxn],n,L,vis[maxn],lastnum=0;  
bool cmp(int a,int b){  
    return a>b;  
}  
//当前还余下的棍子的个数和还缺的长度   
bool dfs(int m,int l){  
    if(m==0&&l==0) return true;  
    if(l==0)  l=L;  
    int s=1;  
    //剪枝4   
    if(l!=L)
    {  
        s=lastnum+1;  
    }  
    for(int i=s;i<=n;i++){  
        if(!vis[i-1]&&i>1&&a[i]==a[i-1]) continue;   //剪枝1   
        if(!vis[i]&&a[i]<=l){  
            vis[i]=1;  
            lastnum=i;  
            if(dfs(m-1,l-a[i])) return true;  
            else{  
                vis[i]=0;  
                if(L==l||a[i]==l) return false;     //剪枝2，3   
            }  
        }  
    }  
    return false;  
}  
int main(){  
    while(~scanf("%d",&n)){  
        if(n==0) break;  
        memset(a,0,sizeof(a));  
        int sum=0,lmax=-1;  
        for(int i=1;i<=n;i++){  
            scanf("%d",&a[i]);  
            if(a[i]>lmax) lmax=a[i];  
            sum+=a[i];  
        }  
        int i=0;  
        sort(a+1,a+1+n,cmp);  
        #if 1  
        for(i=lmax;i<=sum/2;i++){  
            if(sum%i) continue;  
            L=i;  
            memset(vis,0,sizeof(vis));  
            lastnum=0;  
            if(dfs(n,i)){  
                printf("%d\n",i);  
                break;  
            }  
        }  
        if(i>sum/2) printf("%d\n",sum);  
        #endif  
    }  
}*/  