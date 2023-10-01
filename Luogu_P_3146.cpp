#include <bits/stdc++.h>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int MAXN = 250;typedef unsigned long long ull;
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
int f[MAXN][MAXN];
int n, ans = 0;
//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    read(n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", f[i] + i);
        ans = max(ans, f[i][i]);
    }
    for(int len = 2; len <= n; len++) {
        for(int l = 1; l + len - 1 <= n; l++) {
            int r = l + len - 1;
            for(int k = l; k < r; k++) {
                if(f[l][k] == f[k + 1][r] && f[l][k]) f[l][r] = max(f[l][r], f[l][k] + 1);
                ans = max(ans, f[l][r]);
            }
        }
    }
    cout << ans << endl;
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}