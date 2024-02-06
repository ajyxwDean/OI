#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <cmath>

using namespace std;
using ll = long long;
using LL = ll;
const int N = 1e5 + 10;
const int INF = 0x7fffffff;
inline void IOS() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
}

void Solve();
bool isPrime(int x) ;
void Res(int, int) ;

string s;
ll maxn = -INF, minn = INF ;

signed main() {
    IOS();
    Solve();
    return 0;
}

void Solve() {
    cin >> s;
    sort(s.begin(), s.end()) ;
    int flg = 0;
    size_t len = s.size();
    for(int i = 0; i < len - 1; i++) {
        if(s[i] == s[i + 1]) {
            flg = !flg;
            break;
        }
    }
    if(!flg) Res(0, -INF);
    for(int i = 0; i < len - 1; i++) {
        if(s[i] == s[i + 1]) {
            int j = i;
            while(s[j] == s[j + 1] && j <= len) j ++;
            maxn = max(maxn, (ll)i - j + 1);
            minn = min(minn, (ll)i - j + 1);
        }
    }
    cout << maxn << " " << minn;
    // Res(isPrime(maxn - minn), maxn - minn) ;
}
bool isPrime(int x) {
    for(int i = 1; i <= sqrt(x); i++) {
        if(x % i == 0) return false;
    }
    return true;
}

void Res(int mode, int result) {
    if(mode) cout << "Lucky Word\n";
    else cout << "No Answer\n0", exit(0);
    cout << result;
    exit(0);
}