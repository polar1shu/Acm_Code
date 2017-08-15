#include <cstdio>   
#include <iostream>  
#include <algorithm>  
using namespace std;  
int main()  
{  
    int T;  
    scanf("%d",&T);  
    int a,b,c;  
    while(T--)  
    {  
        scanf("%d%d%d",&a,&b,&c);
        if(a> 0 && b>0 && c>0 && a+b+c == 180)
        	printf("YES\n");
        else
        printf("NO\n");  
    }  
    return 0;  
}
