#include <bits/stdc++.h>

using namespace std;

const int N = 1000010;

typedef long long ll;

ll to[N];

int main() {
    ll n, T;
    scanf("%lld%lld", &n, &T);
    for(ll i = 1; i <= n; i++) {
        ll s, t;
        scanf("%lld%lld", &s, &t);
        to[s] = max(to[s], t);
    }
    ll R = 0, nxt = 1, ans = 0;
    for(ll i = 1 ;i <= T; i++) {
        R = max(R, to[i]);
        if(i == nxt) {
            if(R < nxt) ans = -0x7fffffff;
            else nxt = R + 1, ++ans;
        }
    }
    if(ans < 0) puts("-1");
    else printf("%lld\n", ans);
    return 0;
}