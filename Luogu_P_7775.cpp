#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

const int N = 510;//861
const int dx[] = {0, 1, 0, -1};
const int dy[] = {-1, 0, 1, 0};

struct node {
    int x, y, s;
};

char mp[N][N];
int vis[N][N];//bfs用
int vis1[N][N];//dfs用
int n, m, sx, sy, ans = 0;

queue<node> que;

bool dfs(int x, int y) { //DFS
    if(mp[x][y] == 'J') return 1;
    for(int i = 0; i < 4; i++) {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if(xx >= 1 && xx <= n && yy >= 1 && yy <= m && !vis1[xx][yy]) {
            vis1[xx][yy] = 1;
            if(dfs(xx, yy)) return 1;
        }
    }
    return 0;
}

int chk(int mid) { //BFS
    memcpy(vis1, vis, sizeof(vis));
    queue<node> q = que;
    while(q.size()) {
        node f = q.front();
        q.pop();
        if(f.s >= mid - 1) continue;
        for(int i = 0; i < 4; i++) {
            node nx = {f.x + dx[i], f.y + dy[i], 0};
            if(nx.x >= 1 && nx.x <= n && nx.y >= 1 && nx.y <= m && vis1[nx.x][nx.y] == 0) {
                nx.s = f.s + 1;
                vis1[nx.x][nx.y] = 1;
                q.push(nx);
            }
        }
    }
    if(vis1[sx][sy]) return 0;
    return dfs(sx, sy);
}

int main() {
    #ifdef LOCAL
        freopen("in.in", "r", stdin);
        freopen("out.out", "w", stdout);
    #endif
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            scanf("%c", &mp[i][j]);
            if(mp[i][j] == '+') {
                que.push(node{i, j, 0});
                vis[i][j] = 1;
            }
            if(mp[i][j] == 'V') sx = i, sy = j;
            // if(mp[i][j] == 'J') {
            //     ex = i;
            //     ey = j;
            // }
        }
    }
    int l = 1, r = n;
    while(l <= r) {
        int mid = (l + r) >> 1;
        if(chk(mid)) {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    printf("%d", ans);
    #ifdef LOCAL
        fclose(stdin);
        fclose(stdout);
    #endif
    return 0;
}
/*
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <vector>

using namespace std;

const int N = 20005;

struct node {
	int to, nxt, w;
}E[N];
int head[N];
vector<int> E1[N];

void add(int u, int v, int w) {
	
}
*/