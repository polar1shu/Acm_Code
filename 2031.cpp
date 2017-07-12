#include <iostream>
#include <cmath>
using namespace std;
void solve(int n,int r)
{
	if(n<r)
    {
        if(n==10)
            printf("A");
        else if(n==11)
            printf("B");
        else if(n==12)
            printf("C");
        else if(n==13)
            printf("D");
        else if(n==14)
            printf("E");
        else if(n==15)
            printf("F");
        else
            printf("%d",n);
    }
    else
    {
        solve(n/r,r);
        solve(n%r,r);
    }
}
int main()
{
	int n,r;
	while(~scanf("%d%d",&n,&r))
	{
		//char a[2000];
		if(n<0)
			printf("-");
		n=abs(n);
		//while()
		solve(n,r);
		printf("\n");
	}
}