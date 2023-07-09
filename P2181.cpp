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
    // P2181
    // n * (n-1) / 2 * (n-2) / 3 * (n-3) / 4
    unsigned long long n;
    cin >> n;
    unsigned long long as = n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4;
    cout << as;
// EndA
//-----------------------------
#ifdef LOCAL
    cerr
        << endl
        << "Time used: " << (clock() - time) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
#endif
    return 0;
}