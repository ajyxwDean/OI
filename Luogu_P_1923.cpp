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
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    nth_element(a, a + k, a + n);
    cout << a[k];
    return 0;
}

bool Compare(ll f, ll s)
{
    return f > s;
}