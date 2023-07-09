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
char ca[1005], cb[1005];
int lc, la, lb, a[1005], b[1005], c[1005];
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
        cin >> ca >> cb;
        la = strlen(ca);
        lb = strlen(cb);
        for(int i = 0; i < la; i++)
        {
            a[la - i - 1] = ca[i] - '0';
        }
        for(int i = 0; i < lb; i++)
        {
            b[lb - i - 1] = cb[i] - '0';
        }
        lc = max(la, lb);
        for(int i = 0; i < lc; i++)
        {
            c[i] = a[i] + b[i] + c[i];
            if(c[i] >= 10)
            {
                c[i + 1] = 1;
                c[i] -= 10;
            }
        }
        if(c[lc] == 1)
            lc++;
        int i = lc;
        if(c[0] == 0)
            i--;
        for(; i >= 0; i--)
        {
            P("%d", c[i]);
        }
    // End
    //-----------------------------
    #ifdef LOCAL
        cerr << endl
            << "Time used: " << (clock() - time) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
    #endif
    return 0;
}
/*


ffffffffffff    aaaaaaaaa         l             ssssssss    eeeeeeee
f               a       a         l             s           e      e
f               a       a         l             ssssssss    e      e
fffffffff       a       a         l                    s    eeeeeeee
f               a       a         l                    s    e
f               aaaaaaaaaaaaa     llllllll      ssssssss    eeeeeeee
f
FALSE!!!!!!!!!!!
*/