#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 5;
/*
属性部分：
g_ 全局变量
c_ 　常量
m_ 　c++类成员变量
s_ 　静态变量
类型部分：
数组 a
指针　p
函数　fn
无效　v
句柄　h
长整型　l
布尔　b
浮点型（有时也指文件）　f
双字 　dw
字符串　 sz
短整型　 n
双精度浮点　d
计数　c（通常用cnt）
字符　ch（通常用c）
整型　i（通常用n）
字节　by
字　w
实型　r
无符号　u
描述部分：
最大　Max
最小　Min
初始化　Init
临时变量　T（或Temp）
源对象　Src
目的对象　Dest
*/
#define LL long long
#define ll long long
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
int a[1005];
/// @brief main function
/// @return 0
bool cmp(const int a, const int b)
{
    return a < b;
}
int main()
{
/*
对于河此岸人数n==2的情况，很显然，耗费时间为二者中最长的一个，两人即可全部到达对岸；对于n==3的情况，先让最快的人带一人去对岸，最快的人回来，再接另一人去对岸，总共花费时间为a1+a2+a3

那么对于n>3的情况怎么来呢？我们可以先运送此岸上用时最长的两人，那么最优秀的运送方法有两种

1.最快的1载最慢的n去对岸，1回此岸继续载次慢的n-1去对岸，a1最后再回到此岸，共用时2*a1+an+a(n-1)

2.最快的人1与次快的人2去对岸，最快的人1回到此岸，最慢的人n再与次慢的人n-1去对岸，次快的人2回到此岸，共用时a1+2*a2+an
*/
#ifdef LOCAL
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    clock_t time = clock();
#endif
    //-----------------------------
    // Ctrl + / -> 注释
    // Start
    // P1809
    int n = iR;
    LL ans = 0;
    for (int i = 1; i <= n; i++)
    {
        a[i] = iR;
    }
    sort(a + 1, a + n + 1);
    while (n > 3)
    {
        ans += min(a[1] * 2 + a[n] + a[n - 1], a[1] + 2 * a[2] + a[n]);
        n -= 2;
    }
    if (n == 3)
        ans += a[1] + a[2] + a[3];
    if (n == 2)
        ans += a[2];
    P("%lld", ans);
// End
//-----------------------------
#ifdef LOCAL
    cerr << endl
         << "Time used: " << (clock() - time) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
#endif
    return 0;
}