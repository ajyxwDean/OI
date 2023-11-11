#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 1e5 + 10;
typedef long long LL;

// #define FOR(i, j, n) for(int i = 1;

LL a[N];
int n;
LL ans = 0;
LL s[N];

int main() 
{
    // freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%lld", &a[i]);
    for(int i = 1; i <= n; i++) s[i] = s[i - 1] + a[i];
    for(int i = 2; i <= n; i++)
        if(s[i] > 0)
            ans += s[i];
    printf("%lld", ans);
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}