#include <bits/stdc++.h>
using namespace std;
int hi[10000005];
int n,m;
bool chk(int height) {
    int tmp = 0;
    for(int i = 0; i < n; i++) {
        // a[i] height
        tmp += hi[i] - height;
    }
    if(tmp < m) return true;
    if(tmp > m) return false;
}
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> hi[i];
    }
    int l = 0, r = n - 1, mid;
    while(l <= r) {
        mid = (l + r) / 2;

        if(chk(mid)) {
            l = mid + 1;
        }else {
            r = mid - 1;
        }
    }
    cout << l;
    return 0;
}