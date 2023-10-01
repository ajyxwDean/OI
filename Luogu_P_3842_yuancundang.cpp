#include <bits/stdc++.h>
#include <iostream>
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
template <typename T, typename...Args>
inline void read(T& t, Args&...args) {
    read(t), read(args...);
}
//=============================
int n;
int l[MAXN], r[MAXN];
int dp  [MAXN][2];
int Dist(int lft, int rght) {
    return abs(rght - lft);
}
//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    read(n);
    for(int i = 1; i <= n; i++) {
        read(l[i], r[i]);
    }
    dp[1][1] = Dist(1, r[1]);
    dp[1][0] = Dist(1, r[1]) + Dist(r[1], l[1]);
    for(int i = 2; i <= n; i++) {
        dp[i][0] = min(dp[i - 1][0] + Dist(l[i - 1], r[i]) + Dist(r[i], l[i]), dp[i - 1][1] + Dist(r[i - 1], r[i]) + Dist(r[i], l[i])) + 1;
        dp[i][1] = min(dp[i - 1][0] + Dist(l[i - 1], l[i]) + Dist(l[i], r[i]), dp[i - 1][1] + Dist(r[i - 1], l[i]) + Dist(l[i], r[i])) + 1;
    }
    cout << min(dp[n][0] + Dist(l[n], n), dp[n][1] + Dist(r[n], n));
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}