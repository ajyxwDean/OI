#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <cmath>

using namespace std;
using ll = long long;
using LL = ll;
const int N = 1e5 + 10;
const int INF = 0x7fffffff;
inline void IOS() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
}

void Solve();

int n, m;
vector<int> a(N);

signed main() {
    IOS();
    Solve();
    return 0;
}

void Solve() {
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
}