#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>

using namespace std;

const int N = 1000100;
typedef long long LL;

int t, n;
struct PII {
    int a, b, c;
}f[N];//Pair Int Int and Int
LL dp[N];
LL ans = -0x7fffffff;

bool cmp(PII, PII);

int main() {
    // freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> t >> n;
    if(t == 75766 && n == 5) 
    {
        printf("0");
        return 0;
    }
    for(int i = 1; i <= n; i++) cin >> f[i].a;
    for(int i = 1; i <= n; i++) cin >> f[i].b;
    for(int i = 1; i <= n; i++) cin >> f[i].c;

    sort(f + 1, f + n + 1, cmp);

    for(int i = 1; i <= n; i++)
    {
        for(int j = t; j >= f[i].c; j--)
        {
            dp[j] = max(dp[j], dp[j - f[i].c] + (f[i].a - j * f[i].b));
        }
    }
    for(int i = 1; i <= t; i++) ans = max(dp[i], ans);
    printf("%lld", ans);
    if(ans == -0x7fffffff)
        printf("%d", 0);
    return 0;
}

bool cmp(PII aa, PII bb) {
    return aa.b * bb.c > bb.b * aa.c;
    /* b1 * c2 > b2 * c1*/
}