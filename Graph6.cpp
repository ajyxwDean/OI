//https://www.acgo.cn/problemset/2092/info?homeworkId=59&teamCode=1664181761155715072
#include <bits/stdc++.h>
using namespace std;
#define MAXN 20005
#define INF 2147483647
struct node {
    int y, len;
};
typedef vector<node> VNODE;
int n, m, s, t;
// vector<node> v[MAXN];
VNODE v[MAXN];
int dis[MAXN];
bool vis[MAXN];
void dijkstra() {
    memset(dis, 0x3f, sizeof(dis));
    // dis[0] = 0x3f3f3f3f
    for(int i = 0; i <= n; i++) {
        dis[i] = INF;
    }
    dis[s] = 0;
    for(int i = 1; i < n; i++) {
        int x, mn = INF;
        for(int j = 1; j <= n; j++) {
            if(dis[j] < mn && !vis[j]) {
                mn = dis[j];
                x = j;
            }
        }
        vis[x] = 1;
        for(int j = 0; j < v[x].size(); j++){
            int y = v[x][j].y;
            int len = v[x][j].len;
            if(vis[y] == 1) continue;
            if(dis[x] + len < dis[y]) {
                dis[y] = dis[x] + len; 
            }
        }
    }
}
int main() {
    cin >> n >> m >> s >> t;
    for(int i = 1; i <= m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        node aaa = {b, c};
        v[a].push_back(aaa);
        node bbb = {a, c};
        v[b].push_back(bbb);
    }
    dijkstra();
    cout << dis[t];
    return 0;
}