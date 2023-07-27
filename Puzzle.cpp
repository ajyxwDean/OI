#include <bits/stdc++.h>
using namespace std;
/*
Sample:
5 5
..###
#....
#.#.#
#.#.#
#.#..
 YES
*/
#define MAXN 45
char Puz[MAXN][MAXN];
int vis[MAXN][MAXN];
int n, m;
int flag;
int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
void dfs(int x, int y) { //开始点的x,y坐标
    //x1 <= n && x1 >= 1 && x2 <= m && x2 >= 1 && !vis[x1][x2]
    if(x == n && y == m) {
        // cout << "YES";
        flag = 1;
        return ;
    }
    for(int i = 0; i < 4; i++) {
        int x1 = x + dir[i][0];
        int y1 = y + dir[i][1];
        if(x1 <= n && x1 >= 1 && y1 <= m && y1 >= 1 && !vis[x1][y1] && Puz[x1][y1] == '.') {
            vis[x1][y1] = 1;
            dfs(x1, y1);
            vis[x1][y1] = 0;
        }
    }
}
int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++) 
            cin >> Puz[i][j];
    dfs(1,1);
    if(flag) cout << "YES";
    else cout << "NO";
    return 0;
}