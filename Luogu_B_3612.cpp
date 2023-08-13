#include <bits/stdc++.h>
using namespace std;
#define MAXN 100005
int a[MAXN], b[MAXN];
int n;
int m;
int l, r;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //Disable Home
    b[0] = a[0];
    for(int i = 1; i < n; i++) {
        b[i] = b[i - 1] + a[i];
    }
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> l >> r;
        cout << b[r - 1] - b[l - 1] + a[l - 1] << endl;
    }
    return 0;
}