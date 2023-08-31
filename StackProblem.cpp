#include <bits/stdc++.h>
using namespace std;
int main() {
    stack<int> stk;
    //1,2,3,4,5,6,7,8,9
    //进行以进栈、 进栈、出栈、 进栈、进栈、进栈、 出栈
    for(int i = 0; i < 2019; i++) {
        stk.push(1);
        stk.push(2);
        stk.pop();
        stk.push(3);
        stk.push(4);
        stk.push(5);
        stk.pop();
    }
    cout << stk.top();
    return 0;
}