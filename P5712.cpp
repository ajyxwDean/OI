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
    int x;
    cin >> x;
    if (x == 1 || x == 0)
        cout << "Today, I ate " << x << " apple.";
    else
        cout << "Today, I ate " << x << " apples.";
// End
//-----------------------------
#ifdef LOCAL
    cerr << endl
         << "Time used: " << (clock() - time) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
#endif
    return 0;
}