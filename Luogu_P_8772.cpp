#include <bits/stdc++.h>
using namespace std;
#define MAXN 20000005
long long a[MAXN], b[MAXN];
long long n;
long long ans = 0;
int main() {
    //1 <= n <= 200000, 1 <= ai <= 1000
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    b[0] = a[0];
    for(int i = 0; i < n; i++) {
        b[i] = b[i - 1] + a[i];
    }
    for(int i = 0; i < n; i++) {
        ans += b[i] * a[i + 1];
    }
    cout << ans;
    return 0;
}