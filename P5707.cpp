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
    // P5707
    int s, v, walktime, gotime, gohour, gominute;
    cin >> s >> v;
    walktime = s / v;
    if (s % v != 0)
        walktime++;
    gotime = (480 + 2880 - 10 - walktime) % 1440;
    gohour = gotime / 60;
    if (gohour < 10)
        cout << 0;
    cout << gohour << ':';
    gominute = gotime % 60;
    if (gominute < 10)
        cout << 0;
    cout << gominute << endl;
// End
//-----------------------------
#ifdef LOCAL
    cerr << endl
         << "Time used: " << (clock() - time) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
#endif
    return 0;
}