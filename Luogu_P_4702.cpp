#include <bits/stdc++.h>
using namespace std;
#define MAXN 1000005
typedef long long LL;
LL n;
LL a[MAXN];
// ai < ai+1
LL ans = 0;
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        ans += a[i];
    }
    // a[0] = 0;
    if(ans % 2LL == 0) {
        cout << "Bob";
    }else {
        cout << "Alice";
    }
    return 0;
}