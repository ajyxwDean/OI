#include <bits/stdc++.h>
#include "KMP.h"
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
#define ll   long long
#define LL   long long
#define P    printf
#define iR   readint()
#define ENDL P("\n")
#define FOR(i, n, m) for (int i = n; i < m; i++)
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
template <typename T>
inline void read(T &a)
{
    T s = 0, w = 1;
    char ch = getchar();
    while (!isdigit(ch))
    {
        if (ch == '-')
        {
            w = -1;
        }
        ch = getchar();
    }
    while (isdigit(ch))
    {
        s = s * 10 + ch - 48;
        ch = getchar();
    }
    a = s * w;
}
string a[MAXN];
int n;


int main()
{
    #ifdef LOCAL
        freopen("in.in","r",stdin);
        freopen("out.out","w",stdout);
        clock_t time = clock();
    #endif
    //-----------------------------
    //Ctrl + / -> 注释
    //Start
        // int a[10],aaa,ans;
        // FOR(i, 0, 10) {
        // read(a[i]);
        // a[i] -= 30;
        // }
        // read(aaa);
        // FOR(i,0,10) {
        //     if(a[i] <= aaa)
        //     ans++;
        // }
        // P("%d", ans);
        // char aText_[10005] = {"abcxabcdabxabcdabcdabcy"};
        // char aParttern_[1005] = {"abcdabcy"};
        char aText_[MAXN];
        char aParttern_[MAXN];
        int iLengthText = iR;
        int iLengthParttern = iR;
        for (int i = 0; i < iLengthText; i++) {
            read(aText_[i]);
        }
        for (int i = 0; i < iLengthParttern; i++)
        {
            read(aParttern_[i]);
        }
        std::cout << KMP_substrSearch(aParttern_, aText_);
    //End
    //-----------------------------
    #ifdef LOCAL
        cerr << endl << "Time used: " << (clock() - time) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
    #endif
    return 0;
}