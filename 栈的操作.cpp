#include <cstdio>
#include <stack>
#include <iostream>
using namespace std ;

int main()
{
    stack<int> s ;
    s.push(1)  ;    //入栈
    s.pop() ;     //出栈
    int num = s.top() ;    //取得栈顶元素
    int len = s.size() ;
    if(s.empty()) {
        printf("栈为空\n") ;
    }
}
