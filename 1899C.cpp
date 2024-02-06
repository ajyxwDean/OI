#include <iostream>
#include <algorithm>
#include <cstdio>
#include <set>
#include <vector>
#include <cmath>

using namespace std;
using ll = long long;
using Iter = multiset<int>::iterator;
const int INF = 0x7fffffff;

multiset <int> s;
vector<int> sum, a;

int T;
int n;
int ans = -INF;

void solve();

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> T;
    while(T --) solve();
    return 0;
}

void solve() {
    cin >> n;
    for(int i = 1 ;i <= n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
        sum[i] = sum[i - 1] + x;
    }
    int r = 1;
    for(int i = 1; i <= n; i++) {
        s.insert(sum[r]);
        while(r <= n && abs(a[r + 1] - a[r]) & 1)  {
            r ++; s.insert(sum[r]);
        }
        ans = max(ans, sum[r] - sum[i]);
    }
    cout << ans << '\n';
    return ;
}