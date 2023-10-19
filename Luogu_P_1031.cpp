#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 105;

int n, cnt = 0, sum;
int a[N];

int main() {
    // freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    // sort(a + 1, a + n + 1);
    int m = sum / n;
    for(int i = 1; i <= n; i++) a[i] -= m;
    for(int i = 1; i < n; i++) {
        if(a[i] == 0) continue;
        if(a[i] != 0) {
            a[i + 1] += a[i];
            cnt++;
        }
    }
    printf("%d", cnt);
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}