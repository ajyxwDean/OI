#include <bits/stdc++.h>
using namespace std;
#define MAXN 100005
int n, m, x, y, q, len;
struct node {
    int y, len;
};
// int n, m, x, yy;
// int q, len;
vector<node> AdjLi[MAXN];
int main() {
    cin >> n >> m >> q;
    for(int i = 1; i <= m; i++) {
        cin >> x >> y >> len;
        AdjLi[x].push_back({y, len});
    }
    for(int i = 1; i <= q; i++) {
        cin >> x;
        for(int j = AdjLi[x].size() - 1; j >= 0; j--) {
            cout << AdjLi[x][j].y << " " << AdjLi[x][j].len << endl;
        }
    }
    return 0;
}