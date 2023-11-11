#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>
#include <stdint.h>
#include <iomanip>

using namespace std;

const int N = 5e6 + 10;
typedef long long LL;
typedef LL ll;

ll n, k;
ll a[N];

bool Compare(ll , ll ) ;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> n >> k;
    for(ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    // for(ll i = 1; i <= n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    cout << a[k + 1];
    return 0;
}

bool Compare(ll f, ll s)
{
    return f > s;
}