#include <bits/stdc++.h>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int MAXN = 1e3 + 9;typedef unsigned long long ull;
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
bitset < MAXN > f[MAXN];
int n, m, i, j;    
//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    for(scanf("%d%d", &n, &m); m--;) {
        read(i, j);
        f[i][j] = 1;
    }
    for(i = 1; i <= n; i++) 
        for(j = 1; j <= n; j++) 
            if(f[j][i]) f[j] |= f[i];
    for(j = n * (n - 1) / 2, i = 1; i <= n; i++) j -= f[i].count();
    cout << j;
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
} 