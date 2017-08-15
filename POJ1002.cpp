#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
#include <map>
using namespace std;

int n;

char change(char a)
{
    switch(a)
    {
    case 'A':
    case 'B':
    case 'C': return '2';
    case 'D':
    case 'E':
    case 'F': return '3';
    case 'G':
    case 'H':
    case 'I': return '4';
    case 'J':
    case 'K':
    case 'L': return '5';
    case 'M':
    case 'N':
    case 'O': return '6';
    case 'P':
    case 'R':
    case 'S': return '7';
    case 'T':
    case 'U':
    case 'V': return '8';
    case 'W':
    case 'X':
    case 'Y': return '9';
    default: return a;
    }
}

int main()
{
    scanf("%d", &n);
    map<string, int> mapp;
    string temp;
    char s[105];
    int len;
    for(int i = 0; i < n; ++i)
    {
        scanf("%s", s);
        len = strlen(s);
        temp = "";
        for(int j = 0; j < len; ++j)
        {
            if((s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= '0' && s[j] <= '9'))
                temp += change(s[j]);
        }
        mapp[temp]++;
    }
    map<string, int>::iterator it;
    int flag = 0;
    for(it = mapp.begin(); it != mapp.end(); ++it)
    {
        if(it->second != 1)
        {
            flag = 1;
            for(int i = 0; i < 7; ++i)
            {
                cout<<it->first[i];
                if(i == 2)
                    printf("-");
            }
            printf(" %d\n", it->second);
        }
    }
    if(!flag) 
        cout << "No duplicates." << endl;
}