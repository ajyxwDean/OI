#include <bits/stdc++.h>
using namespace std;
#define MAXN 100005
int f[MAXN], k, n;
int main() {
    cin >> n >> k;
    f[0] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= min(i, k); j++) {
            f[i] = (f[i] + f[i - j]) % 100003;
        }
    }
    cout << f[n];
    return 0;
}