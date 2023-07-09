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
    // P5708
    double p;
    double a, b, c;
    cin >> a >> b >> c;
    p = (a + b + c) / 2.0;
    double as = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.1f", as);
// End
//-----------------------------
#ifdef LOCAL
    cerr << endl
         << "Time used: " << (clock() - time) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
#endif
    return 0;
}