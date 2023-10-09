/*
    CSP-J 2023 10.1模拟赛
    T2 矩形
    50分
    Powered by LStylus
*/

#include <bits/stdc++.h>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int MAXN = 1e6 + 5;typedef unsigned long long ull;
const int INF = 0x7114514114fff;
#define RI register int;
#define ll long long
#define LL long long
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
struct Point {
    int x, y;
}a[MAXN];
int mxx[MAXN], mxy[MAXN];
int maxx = -INF, maxy = -INF;
//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    read(n);
    int S = 0;
    for(int i = 1; i <= n; i++) {
        read(a[i].x, a[i].y);
        S += a[i].x * a[i].y * 4;
    }
    cout << S;
    // -maxx ~ maxx
    // -maxy ~ maxy
    // int S = 0;
    // for(int i = -maxx; i <= maxx; i++) {
    //     for(int j = -maxy; j <= maxy; j++) {
    //         S += mxx[i] * mxy[j];
    //     }
    // }
    //1e6 ^ 2 = 1e12 O(n^2) no

    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}