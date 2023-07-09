#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
#define P printf
#define iR readint()
#define ENDL P("\n")
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
struct PeoP
{
    int a, num;
} a[10005];
bool cmp(PeoP a, PeoP b)
{
    if (a.a != b.a)
        return a.a < b.a;
    return a.num < b.num;
}
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
    int n;
    n = iR;
    double ans = 0;
    for (int i = 1; i <= n; i++)
    {
        a[i].a = iR;
        a[i].num = i;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++)
    {
        P("%d ", a[i].num);
    }
    ENDL;
    for (int i = 1; i <= n; i++)
    {
        ans += i * a[n - i].a;
    }
    ans /= n;
    P("%.2f", ans);

// End
//-----------------------------
#ifdef LOCAL
    cerr << endl
         << "Time used: " << (clock() - time) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
#endif
    return 0;
}