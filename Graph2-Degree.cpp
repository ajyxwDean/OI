//https://www.acgo.cn/problemset/2332/info?homeworkId=59&teamCode=1664181761155715072
#include <bits/stdc++.h>
using namespace std;
#define MAXN 105
int AdjMat[MAXN][MAXN];
int n, m;
int main() {
    // cin >> n >> m;
    cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        AdjMat[a][b] = 1;
        AdjMat[b][a] = 1;
    }
    #ifdef LOCAL
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++) 
                cout << AdjMat[i][j] << " "; 
            cout << endl;
        } 
    #endif
    for(int i = 1; i <= n; i++) {
        int ans = 0;
        for(int j = 1; j <= n; j++) {
            if(AdjMat[i][j]) ans++;
        }
        cout << ans << " ";
    }
}