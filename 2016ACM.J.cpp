#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;

#define REP1(i, n) for (int i = 1; i <= n; i++)
#define REP0(i, n) for (int i = 0; i < n; i++)
#define REP(i, l, r) for (int i = l; i <= r; i++)
#define RP(i, r, l) for (int i = r; i >= l; i--)
#define FORE(i, x) for (int i = fi[x]; i != -1; i = e[i].n)

#define MAX_N 200

typedef long long m64;

int f[20][MAX_N];
bool sign[MAX_N];
int pr[MAX_N], pn;
m64 L, R;

void init(void)
{
 	 REP(i, 2, 160)
 	 {
        if (!sign[i]) pr[++pn] = i;
		for (int j = 1; j <= pn && i * pr[j] <= 160; j++) 
		{
			sign[i * pr[j]] = true;
		 	if (i % pr[j] == 0) break; 
		}
     }
	 //REP1(i, 20) printf ("%d ", pr[i]); puts("");
     f[0][0] = 1;
     REP0(i, 16) REP(j, 0, 160) if (f[i][j]) REP0(k, 10) f[i + 1][j + k] += f[i][j];
     //printf ("%lld\n", f[2][5]);
}

m64 solve(m64 x)
{
	if (x <= 0) return 0;
 	int str[100]; int m = 0;
 	while (x) str[m++] = x % 10, x /= 10;
 	m64 s = 0; int t = 0;
 	/*RP(i, m - 1, 0) printf ("%d\n", str[i]); puts("");
    printf ("-> %d %lld\n", m, s);fflush(stdout);*/
 	RP(i, m - 1, 0)
 	{
      REP0(j, str[i]) REP1(k, pn)
          if (j + t <= pr[k]) s += f[i][pr[k] - t - j];
      t += str[i];
      //printf ("%d[%d] %d %lld\n", i, str[i], t, s);
    }
    if (!sign[t] && t > 1) s++;
    return s;
}

int main(void)
{
	//freopen ("input.txt", "r", stdin);
	//freopen ("output.txt", "w", stdout);
	int test; scanf ("%d", &test); init();
	for (int i = 1; i <= test; i++)
	{
		scanf ("%lld%lld", &L, &R); int p = 0;
		/*L = 1;
		REP(j, (int)L, (int)R)
		{
		   int t = 0, x = j;
		   while (x) t += x % 10, x /= 10;
		   if (!sign[t] && t > 1) p++;
		}*/
		printf ("%lld\n", solve(R) - solve(L - 1));
	}
	return 0;
}



/*#include <stdio.h>
#include <string.h>
#include <math.h>
//char a[20],b[20];
int dp[18][10][160];
int a[160];
int digit[17];
void prime()
{
	a[0]=0;
	a[1]=0;
	for(int i=2;i<145;++i)
	{
		if(a[i] == 0)
		    for(int j=i+i;j<145;j+=i)
			    a[j]=1;
	}
}
void init()
{
	dp[0][0][0]=1;
	for(int i=0;i<10;++i)
		dp[0][i][i]=i;
	for(int i=1;i<=17;++i)
	{
		for(int j=0;j<10;++j)
		{
			for(int k=0;k<160;++k)
			{
				int t;
				t+=dp[i-1][j][k];
				if(t == k)
					dp[i][j][k]++;
			}
		}
	}
}
int changdu(long long x)
{
	int count=0;
	while(x)
	{
		count++;
		x/=10;
	}
	return count;
}
int caldigit(long long x,int n)
{
	memset(digit,0,sizeof(digit));
	for(int i=0;i<n;++i)
	{
		digit[i]=x%10;
		x/=10;
	}

}
long long solve(long long x)
{
	int len=changdu(x);
	int ans=0;
	caldigit(x,len);
	for(int i=len;i>=0;--i)
	{
		for(int j=0;j<digit[i];++j)
		{
			for(int k=0;k<160;++k)
			{
				if(a[k])
					ans+=dp[i][j][k];
			}
		}
	}
	return ans;
}
int main()
{
	init();
	prime();
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long L,R;
		scanf("%lld%lld",&L,&R);
		printf("%lld\n",solve(R)-solve(L-1));
	}
	return 0;
}*/