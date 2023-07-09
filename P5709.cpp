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
    int m, t, s;
    cin >> m >> t >> s;
    if (t == 0)
    {
        cout << 0;
        goto a;
    }
    if (s % t == 0)
        cout << max(m - s / t, 0);
    else
    {
        cout << max(m - s / t - 1, 0);
    }
// End
//-----------------------------
a:
#ifdef LOCAL
    cerr << endl
         << "Time used: " << (clock() - time) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
#endif
    return 0;
}