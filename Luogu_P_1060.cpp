//[NOIP2006 普及组] 开心的金明
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 40;
int n, m;
int dp[MAXN][MAXN];
int w[MAXN], c[MAXN];
int main() {
    cin >> m >> n;
    for(int i = 1; i <= n; i++) {
        cin >> c[i] >> w[i];
        c[i] *= w[i];
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(j < w[i]) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + c[i]);
        }
    }
    cout << dp[n][m];
    #ifdef LOCAL
    cout << "\nDP Array:\n";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
    #endif
    return 0;
}