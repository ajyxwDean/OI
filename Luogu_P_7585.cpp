#include <cstdio>

using namespace std;

typedef long long LL;
const int N = 3e5 + 10;

LL n, m, ans = 0, l, r, mid, a[N];

bool chk(LL M) {
    LL sum = 0;
    for(int i = 1; i <= m; i++) sum += (a[i] + M - 1) / M;
    return sum <= n;
}

int main() {
    // freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);
    scanf("%lld %lld", &n, &m);
    for(int i = 1; i <= m; i++) {
        scanf("%lld", &a[i]);
        r += a[i];
    }
    // a[] = 7, 1, 7, 4, 4
    // r = 23
    while(l < r) {
        //1 -> mid = 12, r = 11, chk(12) = true
        //2 -> mid = 6 , r = 5,  chk(6) = true
        //3 -> mid = 3 , r = 10, chk(3) = false, l = 4
        mid = (l + r) / 2 + 1;
        if(chk(mid)) {
            r = mid - 1;
            ans = mid;
        }else l = mid;
    }
    printf("%lld", ans);
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}