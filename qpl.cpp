#include <bits/stdc++.h>
using namespace std;
int n;
#define MAXN 15
int a[MAXN];
int vis[MAXN];
bool chk() {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(a[i] == a[j] && i != j)
                return false;
        }
    }
    return true;
}
void dfs(int t) {
    if(t == n + 1) {
        if(chk())
            for(int i = 1; i <= n; i++) cout << a[i] << " ";
        cout << endl;
        return ;
    }
    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            a[t] = i;
            vis[i] = 1;
            dfs(t + 1);
            vis[i] = 0;
        }
    }
}
int main() {
    cin >> n;
    dfs(1);
    return 0;
}