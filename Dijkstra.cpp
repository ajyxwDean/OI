#include <bits/stdc++.h>
using namespace std;
const int INF = 0x7fffffff;
int n, e, s;
const int MAXN = 105;
int dis[MAXN], chk[MAXN];
int G[MAXN][MAXN];
int main() {
    for(int i = 1; i <= 100; i++) {
        dis[i] = INF;
    }
    cin >> n >> e;
    for(int i = 1; i <= e; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        G[a][b] = c;
    }
    cin >> s;
    dis[s] = 0;
    for(int i = 1; i <= n; i++) {
        int mn = INF, mxx;
        for(int j = 1; j <= n; j++) {
            if(dis[j] < mn && !chk[j]) {
                mn = dis[j], mxx = j;
            }
        }
        chk[mxx] = 1;
        for(int j = 1; j <= n; j++) {
            if(G[mxx][j] < dis[j]) {
                dis[j] = mn + G[mxx][j];
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        cout << dis[i] << " ";
    }
    return 0;
}