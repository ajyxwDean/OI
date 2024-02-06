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

int n;
vector<int> a;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++) {
        int x; cin >> x;
        a.insert(upper_bound(a.begin(), a.end(), x), x);
        if((i % 2) & 1) {
            cout << a[(i - 1) / 2] << '\n';
        }
    }
    return 0;
}