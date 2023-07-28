#include <bits/stdc++.h>
using namespace std;
#define MAXN 200005
int x, y;
int n, m, a, b, u;
int flag = 0;
// vector<int> v[MAXN];
typedef vector<int> VINT;
VINT v[MAXN];
bool vis[MAXN];
void bfs() {
    queue<int> que;
    que.push(a);
    vis[a] = 1;
    while(!que.empty()) {
        int n1 = que.front();
        que.pop();
        if(n1 == b) {
            flag = 1;
            cout << "Yes";
            return ;
        }
        for(int i = 0; i < v[n1].size(); i++) {
            int y = v[n1][i];
            if(vis[y] == 1) continue;
            que.push(y);
            vis[y] = 1;
        }
    }
}
int main() {
    cin >> n >> m >> a >> b;
    for(int i = 1; i <= m; i++) {
        cin >> x >> y;
        v[x].push_back(y);
    }
    bfs();
    if(!flag) cout << "No";
    return 0;
}