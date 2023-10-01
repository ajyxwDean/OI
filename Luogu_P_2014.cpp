#include <bits/stdc++.h>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int MAXN = 605;typedef unsigned long long ull;
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
struct node{ 
    int nxt, to;
}e[MAXN];
int head[MAXN], num = 0;
void add(int from, int to) {
    num++;
    e[num].nxt = head[from];
    e[num].to = to;
    head[from] = num;
}
int n, m, w[MAXN], val[MAXN], f[MAXN][MAXN];
void dfs(int u) {
    f[u][0] = 0;
    f[u][1] = val[u];
    for(int i = head[u]; i; i = e[i].nxt) {
        int v = e[i].to;
        dfs(v);
        for(int j = m + 1; j >= 1; j--) {
            for(int k = 0; k < j; k++) {
                f[u][j] = max(f[u][j], f[u][j - k] + f[v][k]);
            }
        }
    }
}
//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    read(n, m);
    val[0] = 0;
    for(int i = 1; i <= n; i++) {
        int x;
        read(x, val[i]);
        add(x, i);
    }
    memset(f, 0xcf, sizeof(f));
    dfs(0);
    int ans = 0;
    for(int i = 1; i <= m + 1; i++) {
        ans = max(ans, f[0][i]);
    }
    cout << ans << endl;
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}