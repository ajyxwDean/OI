#include <bits/stdc++.h>
using namespace std;
//iostream iomanip
int n, a[10];
long cnt = 0;
void perm(int k) {
    int j, p;
    if(k == n) {
        cnt++;
        for(p = 1; p <= n; p++) {
            cout << setw(1) << a[p];
            cout << " ";
        }
        if(cnt % 5 == 0) {
                cout << endl;
        }
        return ;
    }
    for(j = k; j <= n; j++) {
        swap(a[k], a[j]);
        perm(k + 1);
        swap(a[k], a[j]);
    }
}
int main() {
    int i;
    cout << "Entry n:" << endl;
    cin >> n;
    for(i = 1; i <= n; i++) {
        a[i] = i;
    }
    perm(1);
    return 0;
}