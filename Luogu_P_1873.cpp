#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>

using namespace std;

const int N = 1e6 + 5;
typedef long long LL;

LL n, m;
LL h[N];
LL ans = 0;
LL tmp = 0;
LL r;
LL l;

bool chk(LL x) {
    for(LL i = 1; i <= n; i++) {
        if(x < h[i]) tmp += h[i] - x;
    }
    return m <= tmp;
}

int main() {
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    scanf("%lld %lld", &n, &m);
    for(LL i = 1; i <= n; i++) {
        scanf("%lld", &h[i]);
        r = r > h[i] ? r : h[i];
    }
    while(l <= r) {
        LL mid = (l + r) >> 1;
        tmp = 0;
        if(chk(mid)) l = (ans = mid) + 1;
        else r = mid - 1;
    }
    printf("%lld", ans);
    fclose(stdin);
    fclose(stdout);
    return 0;
}