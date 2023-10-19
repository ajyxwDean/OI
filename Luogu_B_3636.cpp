#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1e6 + 5;

int n;
int f[N];

int main() {
    // freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);
    scanf("%d", &n);
    f[1] = 0;
    for(int i = 2; i <= n; i++) {
        if(i % 2 == 0)
        f[i] = min(f[i - 1] + 1, f[i / 2] + 1);
        else f[i] = f[i - 1] + 1;
    }
    printf("%d", f[n]);
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}