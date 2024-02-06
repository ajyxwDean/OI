#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>

using namespace std;
using ll = long long;
using LL = ll;
const int N = 1e3 + 10;
const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};
const int INF = 0x7fffffff;
inline void IOS() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
}

void Solve();
void bfs(int, int);

struct node {
	int x, y;
};
queue<node> que;
int n, m;
int mp[N][N];
int vis[N][N];
int cnt = 0;

signed main() {
    IOS();
    Solve();
    return 0;
}

void Solve() {
    scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			scanf("%1d", &mp[i][j]);
		}
	}
	for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(!vis[i][j] && mp[i][j] != 0) {
                cnt++;
                bfs(i, j);
            }
        }
    }
    printf("%d", cnt);
}

void bfs(int sx, int sy) {
    que.push(node{sx, sy});
    vis[sx][sy] = 1;
	while(!que.empty()) {
		node t = que.front();
        que.pop();
		for(int i = 0; i < 4; i++) {
			int nx = t.x + dx[i];
			int ny = t.y + dy[i];
			if(nx >= 1 && nx <= n && ny >= 1 && ny <= m && !vis[nx][ny] && !mp[nx][ny] == 0) {
                que.push(node{nx, ny});
                vis[nx][ny] = 1;
            }
		}
	}
}