#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>

using namespace std;

const int N = 505;

int res = -0x3f3f3f3f;
int n;
int a[N];

void dfs(int u, int sa, int sb) {
    if(u > n){
        if(sa == sb)
            if(res < sa) res = sa;
        return ;
    }
    dfs(u + 1, sa + a[u], sb);
    dfs(u + 1, sa, sb + a[u]);
    dfs(u + 1, sa, sb);
}

int main() {
    int sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    dfs(1, 0, 0);
    printf("%d", res + (sum - 2 * res));
    return 0;
}