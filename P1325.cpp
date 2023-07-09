#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
#define P printf
#define R readint()
#define read(a)                      \
    {                                \
        char c;                      \
        while ((c = getchar()) > 47) \
            a = a * 10 + (c ^ 48);   \
    }
#define print(a)        \
    {                   \
        cout.tie(NULL); \
        cout << a;      \
    }
inline int readint()
{
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        x = (x << 1) + (x << 3) + (ch ^ 48);
        ch = getchar();
    }
    return x * f;
}
inline char readchar()
{
    char c = getchar();
    return c;
}
const int MAXN = 1010;
struct Point
{
    double l, r;
} a[MAXN];
bool cmp(Point aa, Point bb)
{
    return aa.r < bb.r;
}
int n, d, ans = 1;
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
    // P1325
    n = R;
    d = R;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        x = R, y = R;
        int dis = sqrt(d * d - y * y);
        a[i].l = x - dis, a[i].r = x + dis;
    }
    sort(a, a + n, cmp);
    double now = a[0].r;
    for (int i = 1; i < n; i++)
    {
#ifdef LOCALA
        P("----------------------\n");
        P("%d\n", now);
        P("----------------------\n\n\n");
#endif
        if (now < a[i].l)
        {
            now = a[i].r;
            ans++;
        }
    } // 贪心策略:目前的雷达不能满足要求，加一个雷达
    P("%d", ans);
// End
//-----------------------------
#ifdef LOCAL
    cerr << endl
         << "Time used: " << (clock() - time) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
#endif
    return 0;
}