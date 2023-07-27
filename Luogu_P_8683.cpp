#include <bits/stdc++.h>
using namespace std;
int n, m, s;
long long ans = 0;
int mx = -1,mn = 1 << 30;
int main() {
    #ifdef LOCAL
        freopen("in.in","r",stdin); 
        freopen("out.out","w", stdout);
    #endif
    cin >> n >> m;
    if(m == 0) {
        //int ans = 0;
        for(int i = 1; i <= n+m+1; i++)cin >> s,ans += s;
        cout << ans;
        return 0;
    }
    for(int i = 1; i <= n+m+1; i++) {
        cin >> s;
        ans += abs(s);
        mx = max(mx,s);
        mn = min(mn,s);
    }
    cout << (mx - mn) + ans - abs(mx) - abs(mn);
    return 0;
}