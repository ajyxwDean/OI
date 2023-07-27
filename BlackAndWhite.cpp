#include <bits/stdc++.h>
using namespace std;
#define MAXN 25
int n, m,cnt = 1;
char ChkBrd[MAXN][MAXN];
int vis[MAXN][MAXN];
int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
void dfs(int x, int y) {
    for(int i = 0; i < 4; i++) {
        int x1 = x + dir[i][0];
        int y1 = y + dir[i][1];
        //Enable
        if(x1 >= 1 && x1 <= m && y1 >= 1 && y1 <= n && !vis[x1][y1] && ChkBrd[x1][y1] == '.') {
            vis[x1][y1] = 1;
            cnt ++;
            dfs(x1, y1);
            // cnt ++;
        }
    }
}
//9 6
// '.' --> black
// '#' --> white
int main() {
    int sx,sy;
    while(true) {
        cin >> n >> m;
        cnt = 1;
        memset(vis, 0, sizeof(vis));
        if(n == 0 && m == 0) break;
        //vis[1][1] = 1;
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; i++) {
                cin >> ChkBrd[i][j];
                if(ChkBrd[i][j] == '@') {
                    sx = i;//
                    sy = j;//
                }
            }
        }
    }
    dfs(sx, sy);
    cout << cnt;
    return 0;
}