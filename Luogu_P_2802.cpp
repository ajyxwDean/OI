#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <queue>

using std::queue;

const int N = 10;
const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};

int n, m;
int mp[N][N];
// int vis[N][N];
int sx, sy;
int vis[N][N];
// int dist[N][N];
struct node {
    int x, y, step, hp;
};
queue<node> que;

void bfs() {
    while(!que.empty()) {
        node t;
        t.hp = que.front().hp;
        t.step = que.front().step;
        t.x = que.front().x;
        t.y = que.front().y;
        que.pop();
        if(mp[t.x][t.y] == 3) {
            printf("%d\n", t.step);
            exit(0);
        }
        if(t.hp > 1){
            for(int i = 0; i < 4; i++) {
                int nx = t.x + dx[i];
                int ny = t.y + dy[i];
                if(nx >= 1 && nx <= n && ny >= 1 && ny <= m) {
                    if(mp[nx][ny] == 1 || mp[nx][ny] == 3) {
                        if(vis[nx][ny] < t.hp - 1) {
                            vis[nx][ny] = t.hp - 1;
                            que.push(node{nx, ny, t.step + 1, t.hp - 1});
                        }
                    }
                    if(mp[nx][ny] == 4) { //mouse
                        if(!vis[nx][ny]) {
                            vis[nx][ny] = 1;
                            que.push(node{nx, ny, t.step + 1, 6});
                        }
                    }
                }
            }
        }
    }
}

int main() {
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            scanf("%d", &mp[i][j]);
            if(mp[i][j] == 2) que.push(node{i, j, 0, 6});
        }
    }
    bfs();
    printf("-1");
    fclose(stdin);
    fclose(stdout);
    return 0;
}