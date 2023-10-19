#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>

using namespace std;

const int N = 1e5 + 5;

int n, m;
int now, ans = 0;
int to[N];
int vis[N];

int main() {
    scanf("%d %d %d", &n, &m, &now);
    for(int i = 1; i <= n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        if(!to[b]) to[b] = a;
    }
    while(to[now]) {
        if(++vis[now] > 1) {
            printf("-1");
            return 0;
        }
        now = to[now];
        ans++;
    }
    printf("%d", ans);
    return 0;
}