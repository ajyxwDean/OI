#include <bits/stdc++.h>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int MAXN = 205;typedef unsigned long long ull;
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
int n;
int a[MAXN];
int mx[MAXN][MAXN], mn[MAXN][MAXN];
int ansmx = -1, ansmn = INF;
int sum[MAXN];//前缀和
//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    memset(mn, 0x3f, sizeof(mn));
    memset(mx, 0, sizeof (mx));
    read(n);
    for(int i = 1; i <= n; i++) {
        read(a[i]);
        a[i + n] = a[i];
    }
    sum[0] = 0; 
    for(int i = 2; i < 2 * n; i++) {
        sum[i] = sum[i - 1] + a[i];
        mn[i][i] = 0, mx[i][i] = 0;
    }
    for(int i = 2; i <= n; i++) {
        for(int j = 1; i + j - 1 <= 2 * n; j++) {
            int r = i + j - 1;
            for(int k = j; k < r; k++) {
                mx[j][r] = max(mx[j][r], mx[j][k] + mx[k + 1][r] + sum[r] - sum[j - 1]);
                mn[j][r] = min(mn[j][r], mn[j][k] + mn[k + 1][r] + sum[r] - sum[j - 1]);
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        ansmn = min(ansmn, mn[i][i + n - 1]);
        ansmx = max(ansmx, mx[i][i + n - 1]);
    }
    printf("%d\n%d", ansmn, ansmx);
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}