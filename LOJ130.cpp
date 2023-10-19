#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 5;

long long n, q, a[N], c[N];
void add(int x, int k) {
    for (; x <= n; x += (x & -x)) {
        c[x] += k;
    }
}
long long asd(int x) {
    long long ans = 0;

    while (x > 0) {
        ans += c[x];
        x -= (x & -x);
    }

    return ans;
}
int main() {
    cin >> n >> q;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        add(i, a[i]);
    }

    for(int i = 1; i <= q; i++){
        int s, x, y;
        cin >> s >> x >> y;

        if (s == 1) {
            add(x, y);
        } else {
            cout << asd(y) - asd(x - 1) << endl;
        }
    }

    return 0;
}