#include <bits/stdc++.h>
using namespace std;
int flag = 0;int cnt = 1;
int in;
void f(int n) {
    if(n == in) {
        flag = 1;
        return ;
    }
    else {
        cnt++;
        f(n+1);
        if(flag == 1) return ;
    }
    
}//2 
int main() {
    cin >> in;
    // cout << in;
    f(1234567);
    cout << cnt;
    return 0;
}