#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
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
bool a[10005][10005];
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
    memset(a, 0, sizeof(a));
    int n, m;
    char tmp;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> tmp;
            if (tmp == '*')
                a[i][j] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == 1)
                printf("*");
            else
            {
                printf("%d", a[i + 1][j + 1] + a[i + 1][j - 1] + a[i + 1][j] + a[i][j + 1] + a[i][j - 1] + a[i - 1][j + 1] + a[i - 1][j] + a[i - 1][j - 1]);
            }
        }
        printf("\n");
    }
// End
//-----------------------------
#ifdef LOCAL
    cerr
        << endl
        << "Time used: " << (clock() - time) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
#endif
    return 0;
}