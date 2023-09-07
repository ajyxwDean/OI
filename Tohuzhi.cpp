#include <bits/stdc++.h>
#include <algorithm>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int MAXN = 1e5 + 5;typedef unsigned long long ull;
const int INF = 0x7fffffff;
#define ll                 long long
#define LL                 long long
template <typename T>inline void read(T &a){
    T s = 0, w = 1; char ch = getchar();
    while (!isdigit(ch)){
        if (ch == '-') w = -1; 
        ch = getchar();
    }
    while (isdigit(ch)) s = s * 10 + ch - 48,ch = getchar();
    a = s * w;
}
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;//ubuntu
}
//=============================
int huZhi(int a) {
    int cnt = 0;
    for(int i = 1; i < a; i++) {
        if(gcd(a, i) == 1) cnt++;
    }
    return cnt;
}
//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    int a;
    cin >> a;
    cout << huZhi(a);
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}