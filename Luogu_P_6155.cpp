#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>

const int N = 1e6 + 5;

bool has_value[N];
int a[N], b[N], d[N], t[N], n, ans = 0;

signed main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    std::sort(a + 1 , a + n + 1);
    for (int i = n; i >= 1; --i) {
        int t = a[i];
        while (has_value[t])
            ++t;
        has_value[t] = true;
        d[i] = t - a[i];
    }
    std::sort(t + 1, t + n + 1);
    std::sort(b + 1, b + n + 1);
    for (int i = 1; i <= n; ++i)
        ans += t[i] * b[n - i + 1];
    printf("%d", ans);
    return 0;
}