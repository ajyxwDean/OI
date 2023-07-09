#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
int main()
{
#ifdef LOCAL
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    clock_t time = clock();
#endif
    //-----------------------------
    // Ctrl + / -> 注释
    // Start
    int a = 0, b = 0, c = 0, d = 0, n;
    scanf("%d", &n);
    if (n % 2 == 0 && n > 4 && n <= 12)
        a = 1;
    if (n % 2 == 0 || n > 4 && n <= 12 || n % 2 == 0 && n > 4 && n <= 12)
        b = 1;
    if (n % 2 == 0 && n <= 4 && n > 12 || n > 4 && n <= 12 && n % 2 == 1)
        c = 1;
    if (n % 2 == 1 && n <= 4 || n % 2 == 1 && n > 12)
        d = 1;
    printf("%d %d %d %d\n", a, b, c, d);
// End
//-----------------------------
#ifdef LOCAL
    cerr << endl
         << "Time used: " << (clock() - time) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
#endif
    return 0;
}