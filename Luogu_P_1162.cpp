#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <queue>

using namespace std;

const int N = 35;
const int dx[] = {0, 0, -1, 1};
const int dy[] = {-1, 1, 0, 0};

struct node {
    int x, y;
};
int n;
int mp[N][N];
queue < node > que;

void bfs(int x, int y) {
    que.push(node{x, y});
    while(!que.empty()) {
        auto t = que.front();
        que.pop();
        mp[t.x][t.y] = 2;
        for(int i = 0; i <= 3; i++) {
            int nx = t.x + dx[i];
            int ny = t.y + dy[i];
            if(nx >= 1 && ny <= n && ny >= 1 && nx <= n) {
                if(mp[nx][ny] == 0) {
                    que.push(node{nx, ny});
                }
            }
        }
    }
}

int main() {
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            scanf("%d", &mp[i][j]);
        }
    }
    bfs(0, 0);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            printf("%d ", mp[i][j]);
        }
        printf("\n");
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}