#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
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
int n;
int iaTj[10005], iaQw[10005];
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
    n = iR;
    for (int i = 0; i < n; i++)
    {
        iaTj[i] = iR;
    }
    for (int i = 0; i < n; i++)
    {
        iaQw[i] = iR;
    }
    sort(iaTj, iaTj + n);
    sort(iaQw, iaQw + n); /*
     int iAns = 0, iLa = 0, iLb = 0, iRa = n - 1, iRb = n - 1;
     for (int i = 0; i < n; i++) {
         if(iaTj[iRa] > iaQw[iRb]){
             iAns += 200;
             iRa--;
             iRb--;
         }else if(iaTj[iRa] < iaQw[iRb]) {
             iAns -= 200;
             iLa++;
             iRb--;
         }else if(iaTj[iLa] < iaQw[iRb]){
             iAns -= 200;
             iLa++;
             iRb--;
         }
     }
     P("%d", iAns);
     */

    int Ans = 0, la = 0, lb = 0, ra = n - 1, rb = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (iaTj[ra] > iaQw[rb])
            Ans += 200, --ra, --rb;
        else if (iaTj[ra] < iaQw[rb])
            Ans -= 200, ++la, --rb;
        else if (iaTj[la] > iaQw[lb])
            Ans += 200, ++la, ++lb;
        else
        {
            if (iaTj[la] < iaQw[rb])
                Ans -= 200;
            ++la, --rb;
        }
    }
    P("%d", Ans);
// End
//-----------------------------
#ifdef LOCAL
    cerr << endl
         << "Time used: " << (clock() - time) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
#endif
    return 0;
}