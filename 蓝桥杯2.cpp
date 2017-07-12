#include <iostream>//http://www.cnblogs.com/shendiao/archive/2013/05/05/3061340.html
#include <cstdio>

using namespace std;

int a[500][500];

int main()
{
    int n = 0, cen = 0;
    while(scanf("%d",&n) == 1)
    {
        cen = 2*(n+1);
        a[cen][cen] = 1;
        a[cen][cen-1] = a[cen][cen-2] = 1;
        for(int i = 2; i <= cen - 2; i = i+2)
        {
            for(int j = i - 2; j <= i; j ++ )
                a[i][j] = 1;
            for(int m = i,n = i -2; m <= cen; m++)
                a[m][n] = 1;
        }//左边1/8图形

        for(int i = 0; i <= cen; i++)
          for(int j = 0; j <= i ; j++)
                a[j][i] = a[i][j];
        for(int i = 0; i <= cen; i++)
            for(int j = 0; j <= cen; j++)
                a[i][2*cen-j] = a[i][j];
        for(int j = 0; j <= 2*cen; j++)
          for(int  i = 0; i <= cen; i ++)
                a[2*cen-i][j] = a[i][j];
        for(int i = 0; i <= 2*cen; i ++)
        {
            for(int j = 0; j <= 2*cen; j++)
            {
                if(a[i][j] == 1)  printf("$");
                else
                    printf(".");
            }
            printf("\n");
        }
    }
    return 0;
}
/*简解
#include <stdio.h>
void swap(int *a, int *b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}

int go(int i, int j, int n)
{
    if (i > n * 2 + 3)
        i = n * 4 + 6 - i;
    if (j > n * 2 + 3)
        j = n * 4 + 6 - j;
    if (i < j) swap(&i, &j);
    if (i <= 2 && j <= 2) return 0;
    if (i % 2 == 1 && j >= i - 2) return 1;
    if (j % 2 == 1 && j != i - 1) return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int i, j;
    for (i = 1; i <= n*4+5; i++)
    {
        for (j = 1; j <= n*4+5; j++)
        {
            if (go(i, j, n))
                printf("$");
            else
                printf(".");
        }
        printf("\n");
    }
    
    return 0;
}
 */