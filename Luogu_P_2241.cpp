#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 5e3 + 5;
typedef long long LL;

LL n, m, res, ans;

int main() {
    // freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);
    scanf("%lld %lld", &n, &m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i == j) res += (n - i) * (m - j);
            else  ans += (n - i ) * (m - j);
        }
    }
    printf("%lld %lld", res, ans);
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}