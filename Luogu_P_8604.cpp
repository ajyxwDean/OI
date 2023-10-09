#include <iostream>
#include <algorithm>
#include <cstdio>//改邻接矩阵力

using namespace std;

const int N = 1005;

typedef long long LL;

// int head[N];
// int vis[N];
// int tot = 0;
LL cnt[N], n, m, res = 0, u, v, _cnt = 0;
int E[N][N], vis[N];
// struct node {
//     int to, nxt;
// }E[N];
// void add(int u, int v) {
//     E[u].to = v;
// 	E[u].nxt = head[u];
// 	head[u] = tot++;
// }

void dfs(LL u1) {
    if(u1 == v) {
        _cnt ++;
        for(int i = 1; i <= n; i++) 
            if(vis[i] == 1) cnt[i] ++;
    }
    for(int i = 1; i <= n; i++) {
        if(!vis[i] && E[u1][i]) {
            vis[i] = 1;
            dfs(i);
            vis[i] = 0;
        }
    }
}

int main(){
    // freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);
	scanf("%lld %lld", &n, &m);
	for(int i = 0; i < m; i++) {
		LL a, b;
		scanf("%lld %lld", &a, &b);
        E[a][b] = 1;
        E[b][a] = 1;
	}
	scanf("%lld %lld", &u, &v);
	dfs(u);
    if(cnt > 0) {
        //res
        for(int i = 1; i <= n; i++) if(cnt[i] == _cnt) res++;
        printf("%lld", res - 1);
    }
    return 0;
}