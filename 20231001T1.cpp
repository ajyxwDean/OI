/*
    CSP-J 2023 10.1模拟赛
    T1 开锁
    模拟+双端队列
    ?
    Powered by LStylus
*/
//1.0s 128.00MB
#include <bits/stdc++.h>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int MAXN = 1e5 + 5;typedef unsigned long long ull;
const int INF = 0x7fffffff;
#define RI register int;
#define ll long long
#define LL long long
template <typename T>inline void read(T &a){
    T s = 0, w = 1; char ch = getchar();
    while (!isdigit(ch)){
        if (ch == '-') w = -1; 
        ch = getchar();
    }
    while (isdigit(ch)) s = s * 10 + ch - 48,ch = getchar();
    a = s * w;
}
template <typename T, typename...Args>
inline void read(T& t, Args&...args) {
    read(t), read(args...);
}
//=============================
int n, k;
int v[MAXN];
int cnt = 0;
//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    read(n, k);
    for(int i = 1; i <= n; i++) {
        read(v[i]);
    }
    int ny = 1;
    int i, j = ny;
    for(i = 1; ; i++) { // i -> 正在尝试第i扇
        for(j = 1; ; j++) { // j -> 第j个钥匙
            if(k == 0) {goto END;}
            if(i == n) i = 1;
            if(j == n) break;
            if(v[j] == i) {k --; continue;}
            else cnt ++;
        }
    }
    END:
    cout << cnt;
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
        return 0;
    #endif
}
/*

deque<int> a;
----------------------------------------------------------
4 2 1 3
----------------------------------------------------------
*/