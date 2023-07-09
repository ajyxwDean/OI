#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1005;
int main() {
    int n, a, b, c, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        ans += abs(a - b) - c;
    }
    cout << ans;
    return 0;
}