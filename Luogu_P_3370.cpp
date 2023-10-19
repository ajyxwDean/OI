#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

typedef unsigned long long ULL;
typedef ULL ull;
const int N = 1e5 + 10;
const ull MOD = 212370440130137957ll;

int n, ans = 1, prime = 233317;
ull a[N];
ull base = 131;
char S[N];

ull Hash(char s[]) {
    int len = strlen(S);
    ull ans = 0;
    for(int i = 0; i < len; i++) ans = (ans * base + (ull) S[i]) % MOD + prime;
    return ans;
}

int main() {
    // freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%s", S);
        a[i] = Hash(S);
    }
    sort(a + 1, a + n + 1);
    for(int i = 1;i < n; i++)
        if(a[i] != a[i + 1]) ans++;
    printf("%d", ans);
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}