//CF1303B
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>

using ll = long long ;
using LL = ll;
using namespace std;

// ll a;
int tt;
ll n, b, g;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> tt;
    while(tt --)
    {
        cin >> n >> g >> b;
        if(g >= b)
        {
            cout << n << '\n';
            continue;
        }else if(2 * g > n)
        {
            cout << n << '\n';
            continue;
        }else{
            ll tmp = (n - 1) / (2 * g) * 1ll;
            ll a = tmp * g * 1ll;
            ll c = min(n / 2, tmp * b) * 1ll;
            ll xy = (n - a - c) * 1ll;
            cout << (tmp * (g + b) + xy) * 1ll << '\n';
        }
    }
    return 0;
}