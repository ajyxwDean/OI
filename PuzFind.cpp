//https://www.acgo.cn/problemset/2074/info?homeworkId=57&teamCode=1664181761155715072
//ACED
/// @author LStylus
/// @brief Puzzle Find
#include <bits/stdc++.h>
using namespace std;
#define MAXN 105
struct node {
    int x, y;
};

int n;
int Puz[MAXN][MAXN];
bool vis[MAXN][MAXN];
int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
queue<node> que;

/// @brief BFS ANSWER
void bfs() {
    que.push({1, 1});
    vis[1][1] = 1;
    while (!que.empty()) {
        node n1 = que.front();
        que.pop();
        cout << Puz[n1.x][n1.y] << " ";
        // if(n1.x == n && n1.y == n) {
        //     cout << Puz[n1.x][n1.y] << " ";
        //     return ;
        // }
        for(int i = 0; i <= 4; i++) {
            int x1 = n1.x + dir[i][0];
            int y1 = n1.y + dir[i][1];
            if(x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= n && !vis[x1][y1]) {
                vis[x1][y1] = 1;
                que.push({x1, y1});
            }
        }
    }
    
}
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> Puz[i][j];
    bfs();
    return 0;
}