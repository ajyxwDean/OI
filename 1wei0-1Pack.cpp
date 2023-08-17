#include <bits/stdc++.h>
using namespace std;
#define MAXN 1005
int dp[MAXN];
int Weight[MAXN], Value[MAXN];
int n;//
int m;//
void Pack_01() {
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
         cin >> Weight[i] >> Value[i];
    }
    for(int i = 0; i < m; i++) { //遍历物品
        for(int j = n; j >= Weight[i]; j--) { //遍历背包
            dp[j] = max(dp[j], dp[j - Weight[i]] + Value[i]);
        }
    }
    cout << dp[n];
}
int main() {
    Pack_01();
    return 0;
}