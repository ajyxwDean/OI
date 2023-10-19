#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 1e5 + 10;

int n;
int a[N];

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", &a[i]);
    sort(a + 1, a + n + 1, cmp);
    for(int i = 3; i <= n; i += 3) a[i] = 0;
    int ans = 0;
    for(int i = 1; i <= n; i++) ans += a[i];
    printf("%d", ans);
    return 0;
}