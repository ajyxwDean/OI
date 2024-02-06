#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>

using namespace std;
using ll = long long;
using LL = ll;
const int N = 1e5 + 10;
const int INF = 0x7fffffff;
inline void IOS() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
}

void Solve();
void bfs(int x);

int n, a, b;
int k[N], vis[N], dep[N];
queue<int> q;

signed main() {
    // IOS();
    Solve();
    return 0;
}

void Solve() {
    scanf("%d %d %d", &n, &a, &b);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &k[i]);
    }
    dep[a] = 0;
    bfs(a);
}

void bfs(int x) {
    q.push(x);
    while(!q.empty()) {
        int to = q.front();
        if(to == b) {
            printf("%d", dep[to]);
            exit(0);
        }
        q.pop();
        int up = to + k[to];
        int down = to - k[to];
        if(!(up <= n && up >= 1) && !(down >= 1 && down <= n)) {
            printf("-1");
            exit(0);
        }
        if(up <= n && up >= 1 && !vis[up]) {
            q.push(up);
            vis[up] = 1;
            dep[up] = dep[to] + 1;
        }
        if(down >= 1 && down <= n && !vis[down]) {
            q.push(down);
            vis[down] = 1;
            dep[down] = dep[to] + 1;
        }
    }
    printf("-1");
    exit(0);
}