#include <cstdio>
#include <stack>
#include <iostream>
using namespace std ;

int main()
{
    stack<int> s ;
    s.push(1)  ;    //��ջ
    s.pop() ;     //��ջ
    int num = s.top() ;    //ȡ��ջ��Ԫ��
    int len = s.size() ;
    if(s.empty()) {
        printf("ջΪ��\n") ;
    }
}
