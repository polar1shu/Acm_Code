/*题意：地图的x轴的上方为海，下方为陆地，海中有n个小岛，坐标为(isl[i].x,isl[i].y)。
有一种雷达，能探测到的范围为以d为半径的圆。问海岸线上至少造多少雷达可以把所有的小岛都包含在内。
注意雷达是建在海岸线上的，也就是x轴上的。
 
思路：贪心，从左到右建立雷达，要尽量多地覆盖岛屿。以岛屿为圆心，以d为半径画圆，
如果画出的圆与x轴没有交点，则不能实现。存在交点的话，计算出第i个岛屿与x轴的交点坐标保存在结构体数组rad[i].sta与rad[i].end中。
对结构体数组排序，按照rad[i].end进行升序排列，然后一次从左到右找雷达。对于rad[i].end为当前最右边的左坐标，
对于下一个岛屿，如果rad[j].sta<ran[i].end，则不需要建立新的雷达，需要更新下一个岛屿。否则需要建立新的雷达。
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
const int Max = 1005;

struct
{
    int x, y;
}isl[Max];    //  小岛的数据。

struct data
{
    float sta, end;
}rad[Max];    //  小岛所对应雷达的数据。

bool cmp(data a, data b)
{
    if(a.end < b.end) 
		return true;
    else 
		return false;
}

int main()
{
    int n, d, t = 1;
    while(cin >> n >> d && n != 0)
	{
        int i, j, max_y = 0;
        for(i = 0; i < n; i ++)
		{
            cin >> isl[i].x >> isl[i].y;
            if(isl[i].y > max_y)
                max_y = isl[i].y;
        }
        getchar();  
		getchar();  //  PE了两次。
		
        cout << "Case " << t ++ << ": ";
        if(max_y > d || d < 0)
		{
            cout << -1 << endl;
            continue;
        }
        float len;
        for(i = 0; i < n; i ++)
		{   //  求出小岛所对应雷达的可能覆盖范围。
            len = sqrt(1.0 * d * d - isl[i].y * isl[i].y);
            rad[i].sta = isl[i].x - len;
            rad[i].end = isl[i].x + len;
        }
        sort(rad, rad + n, cmp);   //  根据rad的end值进行排序。
		
        int ans = 0;
        bool vis[Max];
        memset(vis, false, sizeof(vis));
        for(i = 0; i < n; i ++)
		{   //  类似的活动选择。
            if(!vis[i])
			{
                vis[i] = true;
                for(j = 0; j < n; j ++)
                    if(!vis[j] && rad[j].sta <= rad[i].end)
                        vis[j] = true;
					ans ++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}


*/
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>
using namespace std;

int n,d;

struct nihao
{
	double s;
    double e;
}intvs[1005];
bool compare(const nihao &dir1, const nihao &dir2)
{
	return dir1.e < dir2.e;
}
int main()
{
	int k=0;
	while(~scanf("%d%d",&n,&d))
	{
		//scanf("%d%d",&n,&d);
		if(n == 0 && d == 0)
		{
			//printf("Case %d: -1\n",++k);
			return 0;
		}
		//struct nihao intvs[1005];
		k++;
		printf("Case %d: ",k);
		//double x,y;
		bool flag =1;
		//printf("Case %d: ",++k);
		if(d<0)
		    flag=0;
		for(int i=0;i<n;++i)
		{
		    double x,y;
			scanf("%lf%lf",&x,&y);
			if(abs(y)>d)
				flag=0;

			if(flag)
			{
				double sqt =sqrt(d*d - y*y);
                intvs[i].s=x-sqt,intvs[i].e=x+sqt;
			}
		}
		if(!flag)
		{
			//printf("Case %d: ",k);
			printf("-1\n");
			continue;
		}
		//printf("Case %d: ",k);
		sort(intvs,intvs+n,compare);
        double num = -1e300;
		//double min = -1e300;
		int sum=0;
		for(int i=0;i<n;++i)
		{
			if(num < intvs[i].s)//min<intvs[i].s)
			{
				sum++;
				num = intvs[i].e;
				//min＝intvs[i].e;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}