#include <iostream>
#include <set>//c++ 中map用法
using namespace std;
int main()
{
	set<string> sum;
	set<string> loser;
	int n;
	while(~scanf("%d",&n) && n)
	{
		string s1,s2;
		for(int i=0;i<n;++i)
		{
			cin>>s1>>s2;
			sum.insert(s1);
			sum.insert(s2);
			loser.insert(s2);
		}
		int sum1 = sum.size(),sum2 = loser.size();
		if(sum1 - sum2 == 1)
			printf("Yes\n");
		else
			printf("No\n");
		sum.clear();
		loser.clear();
	}
}
