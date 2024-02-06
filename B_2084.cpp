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

ll n, p;

signed main() {
    IOS();
    Solve();
    return 0;
}

void Solve() {
    cin >> n >> p;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            cout << n / i << '\n';
            exit(0);
        }
    }
}