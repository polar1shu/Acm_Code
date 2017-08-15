#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
	string s;
	while(getline(cin,s))//要是只用cin>>输入字符串，需要吞回车
	{
		if(s=="ENDOFINPUT")  
            break; 
		string str;
		//cin.ignore(INT_MAX, '\n');
		getline(cin,str);
		for(int i=0;i<str.size();++i)
		{
			if(isalpha(str[i]))  
                str[i] = 'A' + (str[i] - 'A' + 21) % 26;
			/*if(s[i]<='Z' && s[i]>='A')
			{
				s[i]-=5;
			}*/
		}
		cout<<str<<endl;
		getline(cin,s);
	}
}