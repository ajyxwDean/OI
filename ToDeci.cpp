// #include <bits/stdc++.h>
// using namespace std;
// //decimalism
// #define LL long long
// int a[20], ans = 20;
// int n, w;
// int p[20];
// //剪枝 --把不可能的答案排除
// void dfs(int t, int cnt) {
//     if(cnt > ans) return ;
//     if(t == n + 1) { //安排完了
//         if(cnt < ans) ans = cnt;
//         return ;
//     }
//     for(int i = 1; i <= cnt; i++) {
//         if(p[i] + a[t] <= w) {
//             p[i] += a[t];
//             dfs(t + 1, cnt);
//             p[i] -= a[t];
//         }
//     }
//     p[cnt + 1] = a[t]; //把第t个人安排了新的一辆车
//     dfs(t + 1, cnt + 1);//缆车数量增加
//     p[cnt + 1] = 0;
// }
// int main() {
//     #ifndef LOCAL
//         freopen("boat.in", "r", stdin);
//         freopen("boat.out", "w", stdout);
//     #endif
//     cin >> n >> w;
//     for(int i = 1; i <= n; i++) {
//         cin >> a[i];
//     }
//     dfs(1,0);
//     cout << ans;
//     #ifndef LOCAL
//         fclose(stdin);
//         fclose(stdout);
//     #endif
// }
#include <bits/stdc++.h>
using namespace std;
#define MAXN 55
int a[MAXN][MAXN];
int color[MAXN][MAXN];
int cnt = 0;//颜色
int num = 0;//s房间
int n, m;
int ans = 0;
int dir[4][2] = {{0, -1}, {-1, 0}, {0, 1}, {1, 0}};
void dfs(int x, int y) { //0 西 1 北 2 东 3 南
    for(int i = 0; i < 4; i++) {
        int x1 = x + dir[i][0];
        int y1 = y + dir[i][1];
        //范围内,无色,无墙
        if(x1 <= n && x1 >= 1 && y1 >= 1 && y1 <= m && !color[x1][y1] && !(a[x][y] >> i & 1)) {
            color[x1][y1] = cnt;
            num++;
            dfs(x1, y1);
            // ans = max(num, ans);     
        }
    }
}
int main() {
    #ifndef LOCAL
        freopen("castle.in", "r", stdin);
        freopen("castle.out", "w", stdout);
    #endif
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(color[i][j] == 0) {
                cnt++; //当前i,j位置的颜色
                num = 1;
                color[i][j] == cnt;
                dfs(i, j);
                ans = max(num, ans);
;            }
        }
    }
    #ifndef LOCAL
        fclose(stdin);
        fclose(stdout);
    #endif
}