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
    // P5711
    int yea;
    cin >> yea;
    if (yea % 100 != 0)
    {
        if (yea % 4 == 0)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    else
    {
        if (yea % 400 == 0)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
// End
//-----------------------------
#ifdef LOCAL
    cerr << endl
         << "Time used: " << (clock() - time) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
#endif
    return 0;
}