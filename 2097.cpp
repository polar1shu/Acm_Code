#include <iostream>
using namespace std;
int solve(int n)
{
	int sum=0;
	while(n)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int solve1(int n)
{
	int sum=0;
	 while(n)
	 {
	 	sum+=n%12;
	 	n/=12;
	 }
	 return sum;
}
int solve2(int n)
{
	int sum=0;
	while(n)
	{
		sum+=n%16;
		n/=16;
	}
	return sum;
}
int main()
{
	int n;
	while(~scanf("%d",&n) && n)
	{
		if((solve(n) == solve1(n)) && (solve1(n) == solve2(n)))
			printf("%d is a Sky Number.\n",n);
		else
			printf("%d is not a Sky Number.\n",n);
	}
}