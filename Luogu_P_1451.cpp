#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

const int N = 1005;
const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};

struct node {
	int x, y;
};
queue<node> que;
int n, m;
int mp[N][N];
int vis[N][N];
int cnt = 0;

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

int main() {
    // freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			scanf("%1d", &mp[i][j]);
		}
	}
    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= m; j++) {
    //         printf("%d", mp[i][j]);
    //     }
    //     printf("\n");
    // }
	for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(!vis[i][j] && mp[i][j] != 0) {
                cnt++;
                bfs(i, j);
            }
        }
    }
    printf("%d", cnt);
	// fclose(stdin);
    // fclose(stdout);
    return 0;
}