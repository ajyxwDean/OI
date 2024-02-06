#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

const int N  = 26;
const int INF = 0x7fffffff;
using ll = long long;
using LL = ll;

int n;
int x;

void Contr() ;
ll QuickPow(ll x, ll y, ll z) ;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    cin >> n;
    ll len = pow(2, n);
    return 0;
}

void Contr() {
    if(__builtin_popcount(0x7f)) {

    }
}

ll QuickPow(ll x, ll y, ll z) {
    ll ans = 1, base = x;
    while(y > 0)
    {
        if(y & 1) ans *= base, ans %= z;
        base *= base;
        y >>= 1;
    }
    return ans;
}