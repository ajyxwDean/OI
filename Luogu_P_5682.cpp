#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 2e5 + 5;
typedef long long LL;

int n;
int a[N];

int main() {
    // freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);
    scanf("%d", &n);
    for(int i = 1;i <= n; i++) {
        scanf("%d", &a[i]);
    } 
    sort(a + 1, a + n + 1);
    n = unique(a + 1, a + n + 1) - a - 1;
    a[0] = 0;
    if(n < 2) printf("-1");
    else printf("%d", max(a[n - 2], a[n] % a[n - 1]));
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}