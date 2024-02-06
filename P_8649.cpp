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

int n, k;
int ans = 0;
vector<int> a(N);
vector<int> s(N);

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    s[1] = a[1];
    for(int i = 2; i <= n; i++) {
        s[i] = s[i - 1] + a[i];
    }
    for(int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            if((s[j] - s[i] + a[j]) % k == 0) ans ++;
        }
    }
    cout << ans;
    return 0;
}