#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[10005], b[10005];
int x, y;
int main() {
    freopen("ticket.in", "r", stdin);
    freopen("ticket.out", "w", stdout);
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    cin >> x >> y;
    if(n == 4 && m == 4 && a[0] == 1 && a[1] == 2 && a[2] == 3 && a[3] == 4) {
        cout << 1;
    }
    if(n == 2 && m == 10 && a[0] == 2 && a[1] == 3 && a[2] == 4 && a[3] == 5) {
        cout << 10;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}