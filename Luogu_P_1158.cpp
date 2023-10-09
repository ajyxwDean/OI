#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int MAXN = 1e5 + 5;typedef unsigned long long ull;
const int INF = 0x7fffffff;
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
inline int Di(int x1, int y1, int x2, int y2){
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}
int x1, x2, y11, y2;
int n;
struct Node {
    int l1, l2;
}dis[MAXN];
int cmp(Node a, Node b) {
    return a.l1 < b.l1;
}
//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    read(x1, y11, x2, y2);
    read(n);
    for(int i = 1; i <= n; i++) {
        int a, b;
        read(a, b);
        // dis[i] = Di(x1, y1, a, b);
        dis[i].l1 = Di(x1, y11, a, b);
        dis[i].l2 = Di(x2, y2, a, b);

    }
    sort(dis + 1, dis + n + 1, cmp);
    int ans = dis[n].l1, hei = -1;
    //From Far To Near
    for(int i = n - 1; i >= 1; i--) {
        hei = max(hei, dis[i + 1].l2);
        ans = min(ans, hei + dis[i].l1);
    }
    cout << ans;
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}