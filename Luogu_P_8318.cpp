#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cstdlib>

using namespace std;

const int N = 1005;

int n, m;
int a[N];

int main() {
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 1; i <= m; i++) {
        int a, x, y;
        scanf("%d %d %d", &a, &x, &y);
    }
    return 0;
}