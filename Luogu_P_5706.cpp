#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>

using namespace std;

typedef double DB;

DB t;
int n;

int main() {
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    // scanf("%f")
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t >> n;
    DB ans = DB(t / n);
    int bot = 2 * n;
    //
    printf("%.3f\n", ans);
    printf("%d", bot);
    fclose(stdin);
    fclose(stdout);
    return 0;
}