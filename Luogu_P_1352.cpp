#include <bits/stdc++.h>
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
int n;
int a[MAXN];
int f[MAXN][2];
vector<int> E[MAXN];
void dfs(int x, int fa) {
    for(int i = 0; i < E[i].size(); i++) {
        int v = E[x][i];
        if(v == fa) continue;
        f[x][0] = max(f[v][0], f[v][1]);
        f[x][1] = a[x] + f[v][0];
    }
}
//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    read(n);
    for(int i = 1; i <= n; i++) read(a[i]);
    for(int i = 0; i < n; i++) {
        int u, v;
        read(u, v);
        E[u].push_back(v);
        E[v].push_back(u);
    }
    dfs(1, 0);
    cout << max(f[1][1], f[1][0]);
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}