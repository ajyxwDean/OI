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
LL n;
struct node
{
    int to, nxt, w;
}E[MAXN];
// int dp[MAXN];
// int cnt = 0;
// int head[MAXN];
// int numJ; //激发器的编号
// int ans = 0;
LL dp[MAXN], cnt = 0, head[MAXN], numJ, ans = 0;
void add(int from, int to, int w) {
    cnt++;
    E[cnt].w = w;
    E[cnt].to = to;
    E[cnt].nxt = head[from];
    head[from] = cnt;
}

void dfs(int x, int fa) {
    for(int i = head[x]; i; i = E[i].nxt) {
        int y = E[i].to, z = E[i].w;
        if(y == fa) continue;
        dfs(y, x);
        dp[x] = max(dp[x], dp[y] + z);
    }
    for(int i = head[x]; i; i = E[i].nxt) {
        int y = E[i].to, z = E[i].w;
        if(y == fa) continue;
        ans += dp[x] - (dp[y] + z); 
    }
}

//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    read(n, numJ);
    for(int i = 1; i < n; i++) {
        int u, v, w;
        read(u, v, w);
        add(u, v, w);
        add(v, u, w);
    }
    dfs(numJ, 0);
    cout << ans << endl;
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}