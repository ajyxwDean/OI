#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

const int N  = 510;
const int INF = 0x7fffffff;
using ll = long long;
using LL = ll;

struct Point {
    int x, y;
};

int n;
vector<Point> a(N);
int ans = 0;
int vis[N][N];

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++) {
        int x1, y11;
        cin >> x1 >> y11;
        x1 = (x1 + 51) << 1;
        y11 = (y11 + 51) << 1;
        a[i].x = x1;
        a[i].y = y11;
        vis[a[i].x][a[i].y] = 1;
    }
    for(int i = 1; i <= n; ++i) {
        for(int j = i + 1; j <= n; ++j) {
            int midx = (a[i].x + a[j].x) / 2;
            int midy = (a[i].y + a[j].y) / 2;
            int x1 = midx - (midy - a[i].y), y1 = midy + (midx - a[i].x);
            int x2 = midx + (midy - a[i].y), y2 = midy - (midx - a[i].x);
            if(x1 <= 0 || y1 <= 0 || x2 <= 0 || y2 <= 0) continue;
            if(vis[x1][y1] && vis[x2][y2]) ++ans;
        }
    }
    ans = ans >> 1;
    cout << ans;
    return 0;
}