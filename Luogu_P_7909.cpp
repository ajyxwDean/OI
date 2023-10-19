#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

long long n, l, r;

int main() {
    // freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);

    scanf("%lld %lld %lld", &n, &l, &r);
    if(l / n == r / n) printf("%lld", r % n);
    else printf("%lld", n - 1);

    // fclose(stdin);
    // fclose(stdout);
    return 0;
}