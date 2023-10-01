#include <bits/stdc++.h>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int MAXN = 1e5 + 5;typedef unsigned long long ull;
const int INF = 0x7fffffff;
#define RI register int
#define ll                 long long
#define LL                 long long
template <typename T>inline void read(T &a){
    T s = 0, w = 1; char ch = getchar();
    while (!isdigit(ch)){
        ch = getchar();
        if (ch == '-') w = -1; 
    }
    while (isdigit(ch)) s = s * 10 + ch - 48,ch = getchar();
    a = s * w;
}
template <typename T, typename...Args>
inline void read(T& t, Args&...args) {
    read(t), read(args...);
}
//=============================
struct node {
    int to, nxt;
}E[2 * MAXN];
int tot = 0;
int n, k;
int head[MAXN];
LL dp[MAXN][25], a[MAXN], ans[MAXN];
void add(int u, int v) {
    tot++;
    E[tot].to = v;
    E[tot].nxt = head[u];
    head[u] = tot;
}
//-----------------------------------
void dfs2(int x, int fa) {
    dp[x][0] = a[x];
    for(int i = head[x]; i; i = E[i].nxt) {
        int v = E[i].to;
        if(v == fa) continue;
        dfs2(v, x);
        for(int j = 1; j <= k; j++) dp[x][j] += dp[v][j - 1];
    }
}
void Link(int now, int p)  {
    for(int i = 1; i <= k; i++) dp[now][i] += dp[p][i - 1];
    //换根 - 加贡献
}
void Cut(int now, int p) {
    for(int i = 1; i <= k; i++) dp[now][i] -= dp[p][i - 1];
    //换根 - 撤贡献
}
void dfs(int x, int fa) {
    for(int i = 0; i <= k; i++) ans[x] += dp[x][i];
    for(int i = head[x]; i; i = E[i].nxt) {
        int v = E[i].to;
        if(v == fa) continue;
        Cut(x, v); Link(v, x);
        dfs(v, x);
        Cut(v, x); Link(x, v);//换根
    }
}
//============================= 
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    read(n, k);
    for(int i = 1, u, v; i < n; i++) {
        read(u, v);
        add(u, v);
        add(v, u);
    }
    for(int i = 1; i <= n; i++) read(a[i]);
    dfs2(1, 0);
    dfs(1, 0);
    for(int i = 1; i <= n; i++) cout << ans[i] << "\n";
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}