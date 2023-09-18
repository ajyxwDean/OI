#include <bits/stdc++.h>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int MAXN = 1e3 + 5;typedef unsigned long long ull;
const int INF = 0x7fffffff;
#define lowbit(x) (x) & (-x)
#define ll                 long long
#define LL                 long long
const int MOD = 10000;
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
inline void read(T &a, Args&...args) {
    read(a), read(args...);
}
//=============================
int n, k;
int dp[MAXN][MAXN];
int sum[MAXN];

//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    read(n, k);
    dp[0][0] = 1;
    for(int i = 0; i <= k; i++) sum[i] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= k; j++) {
            if(j >= i) dp[i][j] = (sum[j] - sum[j - i] + MOD) % MOD;
            else dp[i][j] = sum[j] % MOD;
        }
        sum[0] = dp[i][0] % MOD;
        for(int j = 1; j <= k; j++) {
            sum[j] = (dp[i][j] + sum[j - 1]) % MOD;
        }
    }
    cout << dp[n][k];
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}