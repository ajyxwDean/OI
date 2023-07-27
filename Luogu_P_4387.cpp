#include <bits/stdc++.h>
#include <stack>
const int MAXN = 1005;
using namespace std;
template <typename T>inline void read(T &a){
    T s=0,w=1;
    char ch=getchar();
    while(!isdigit(ch)){
        if(ch=='-'){
          w=-1;
        }
        ch=getchar();
     }
    while(isdigit(ch)){
        s=s*10+ch-48;
        ch=getchar();
    }
  	 a=s*w;
}
int q;
int main() {
    read(q);
    for(int j = 0; j < q; j++){
        int _in[MAXN], _out[MAXN];
        int n;
        read(n);
        for(int i = 1 ; i <= n; i++) read(_in[i]);
        for(int i = 1; i <= n; i++) read(_out[i]);
        stack<int> stk;
        int it = 1;
        for(int i = 1; i <= n; i++) {
            stk.push(_in[i]);
            while(stk.top() == _out[it]) {
                stk.pop();
                it++;
                if(stk.empty())
                    break;
            }
        }
        if(stk.empty()) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}