#include <bits/stdc++.h>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int MAXN = 1e6 + 5;typedef unsigned long long ull;
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
    int to, nxt;
}E[MAXN];
int head[MAXN], cnt = 0;
void add(int from, int to) {
    cnt++;
    E[cnt].nxt = head[from];
    E[cnt].to = to;
    head[from] = cnt;
}
int d[MAXN];
int Max[MAXN], Min[MAXN], f[MAXN];
int ans = 0;
int n, u, v, rt;
void dfs(int u) {
    Max[u] = Min[u] = u;
    f[u] = 1;
    for(int i = head[u]; i != 0; i = E[i].nxt) {
        int v = E[i].to;
        dfs(v);
        Max[u] = max(Max[u], Max[v]);
        Min[u] = min(Min[u], Min[v]);
        f[u] += f[v];
    }
    if(Max[u] - Min[u] + 1 == f[u]) ans++;
}
//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    read(n);
    for(int i = 1; i < n; i++) {
        read(u, v);
        add(u, v);
        d[v]++;
    }
    for(int i = 1; i <= n; i++) {
        if(d[i] == 0) {
            rt = i;
             break;
        }
    }
    dfs(rt);
    cout << ans << endl;
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}