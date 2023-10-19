#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

const int N = 5005;

int n, m;
int cnt = 0;
struct stu {
    int id, res;
}a[N];

bool cmp(stu a1, stu b) {
    return a1.res > b.res;
}
bool cmp1(stu a1, stu b) {
    if(a1.res == b.res) return a1.id < b.id;
    else return a1.res < b.res;
}

int main() {
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++) {
        scanf("%d %d", &a[i].id, &a[i].res);
    }
    double m1 = m * 1.5;
    int m11 = floor(m1);
    sort(a + 1, a + n + 1, cmp);
    // m11 + 1;
    for(int i = m11; i <= n; i++) a[i].res = -1, a[i].id = -1;
    sort(a + 1, a + n + 1, cmp1);
    int i = 1;
    while(a[i].id != -1 && a[i].res != -1) {
        cnt++;
    }
    printf("%d %d\n", m11, cnt);
    while(a[i].id != -1 && a[i].res != -1) {
        printf("%d %d\n", a[i].id, a[i].res);
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}