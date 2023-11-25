#define STL_INCLUDE
#include <iostream>
#include <cstdlib>
#include <stdint.h>
#include <cstdio>
#include <algorithm>
#ifdef STL_INCLUDE
#include <cstring>
#include <deque>
#include <queue>
#include <stack>
#include <list>
#include <cmath>
#endif
const int N = 1e5 + 10;

using ll = long long;
using LL = ll;
using std::cin;
using std::cout;
using std::ios;
using std::sort;
using std::nth_element;
using std::unique;
using std::min;
using std::max;
using std::string;
#ifdef STL_INCLUDE
using std::queue;
using std::stack;
using std::deque;
using std::list;

#endif

int n;
// int tt;
ll a, b, p;

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


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> a >> b >> p;
    cout << a << "^" << b << " mod " << p << "=" << QuickPow(a, b, p);
    return 0;
}