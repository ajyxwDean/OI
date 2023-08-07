#include <bits/stdc++.h>
using namespace std;
/*
有n个物品,每个物品都有体积和价值,问在体积V的背包能产生的最大价值
状态:dp[i][j] --> 把前i个物品装入体积为j的背包能产生的最大价值

dp[i][j] = max(dp[i - 1][j], dp[i - i][j - w[i]] + c[i]);
*/
#define LL long long
#define MAXN 10005
LL dp[MAXN][MAXN];
int n, m;
int w[MAXN];
int c[MAXN];
int main() {
    cin >> m >> n;
    for(int i = 0; i < n; i++) {
        cin >> w[i] >> c[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            dp[i][j] = max(dp[i - 1][j], dp[i - i][j - c[i]] + w[i]);
        }
    }
    cout << dp[m][n];
    return 0;
}//