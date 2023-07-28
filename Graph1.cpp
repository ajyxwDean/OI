#include <bits/stdc++.h>
using namespace std;
#define MAXN 105
int AdjMat[MAXN][MAXN];
int n;
int m;
int main() {
    cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        AdjMat[a][b] = 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) 
            cout << AdjMat[i][j] << " "; 
        cout << endl;
    } 
    return 0;
}