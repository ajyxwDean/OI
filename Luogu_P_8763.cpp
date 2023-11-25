#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <cstdlib>
#include <bitset>

using namespace std;
const int N = 1e4 + 10;
typedef long long LL;
typedef LL ll;

//18446744073709551616 LL_MAX >
//1000000000000000000  N_MAX

ll n, t;
int x = 1;
// string Bin;
string str;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> n >> t;
    cin >> str;
    int mx = 1;
    while(mx < n)
    {
        mx *= 2;
    }
    t %= mx;
    for(int i = 0; i < t; i ++)
    {
        for(int j = n - 1; j >= 1; j --)
        {
            str[j] = ( str[j] - '0' ) ^ ( str[j - 1] - '0' ) + '0';
        }
    }
    cout << str << '\n';
    return 0;
}