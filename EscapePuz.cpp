#include <bits/stdc++.h>
using namespace std;
#define MAXN 25
struct node {
    int x, y, step;
};
int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
int flag = 0;
char Puz[MAXN][MAXN];
int n, m;
bool vis[MAXN][MAXN];
int sx, sy, fx, fy;
void bfs() {
    flag = 0;
    memset(vis, 0, sizeof(vis));
    queue<node> que;
    que.push({sx, sy, 0});
    vis[sx][sy] = 1;
    while(!que.empty()) {
        node n1 = que.front();
        que.pop();
        if(n1.x == fx && n1.y == fy) {
            flag = 1;
            cout << n1.step << endl;
            return ;
        }
        for(int i = 0; i < 4; i++) {
            int x1 = n1.x + dir[i][0];
            int y1 = n1.y + dir[i][1];
            if(x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= m && !vis[x1][y1] && Puz[x1][y1] != '#') {
                vis[x1][y1] = 1;
                que.push({x1, y1, n1.step + 1});
            }
        }
    }
}
int main() {
    while (cin >> n >> m)
    {
        if(n == 0 && m == 0) break;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                cin >> Puz[i][j];
                if(Puz[i][j] == '@') {
                    sx = i;
                    sy = j;
                }
                if(Puz[i][j] == '*') {
                    fx = i;
                    fy = j;
                }
            }
        }
        bfs();
        if(!flag) cout << -1 << endl;
    }
    return 0;
}