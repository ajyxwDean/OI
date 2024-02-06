#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

const int N  = 1e5 + 10;;
const int INF = 0x7fffffff;
using ll = long long;
using LL = ll;

int n, m;
vector<int> a;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        int x; cin >> x;
        a.push_back(x);
    }
    for(int i = 1; i <= m; i++) {
        int x; cin >> x;
        cout << a[x - 1] << '\n';
    }
    return 0;
}