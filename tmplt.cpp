#include <bits/stdc++.h>

using namespace std;

const int N = 10;
const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};

int n, m;
int mp[N][N];
int vis[N][N];
int sx, sy;
int num[N][N];
int dist[N][N];
struct node {
	int x, y;
};
/*

3 3
2 1 1
1 1 0
1 1 3

num[][]:
6 6 6
6 6 6
6 6 6

*/
queue < node > que;

bool chk(int x, int y) {
	return (x >= 1 && x <= n && y >= 1 && y <= m && !vis[x][y] && mp[x][y] != 0 && num[x][y] > 1);
}

int bfs(int sx, int sy) {
	memset(vis, 0, sizeof(vis));
	que.push(node {sx, sy});
	vis[sx][sy] = 1;
	num[sx][sy] = 6;
	dist[sx][sy] = 0;
	while(!que.empty()) {
		auto t = que.front();
		que.pop();
		if(mp[t.x][t.y] == 3) return dist[t.x][t.y];
        if(num[t.x][t.y] == 1) return -1;
		for(int i = 0; i < 4; i++) {
			int xx = t.x + dx[i];
			int yy = t.y + dy[i];
			dist[xx][yy] = dist[t.x][t.y] + 1;
			if(mp[xx][yy] == 4) num[xx][yy] = 6;
			else num[xx][yy] = num[t.x][t.y] - 1;
//			if(mp[xx][yy] == 3) return dist[xx][yy];
			if(chk(xx, yy)) {
				que.push(node{xx, yy});
			}
		}
	}
	return -1;
//	que.pop();
} 

int main() {
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			scanf("%d", &mp[i][j]);
			if(mp[i][j] == 2) {
				sx = i;
				sy = j;
			}
		}
	}
	printf("%d", bfs(sx, sy));
    fclose(stdin);
    fclose(stdout);
	return 0;
}