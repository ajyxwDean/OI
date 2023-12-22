#include <iostream>
#include <cstdlib>
#include <stdint.h>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <cmath>
const int N = 1e5 + 10;

using ll = long long;
using LL = ll;
using std::cin;
using std::cout;
using std::ios;
using std::sort;
using std::string;


int n, k;
string str;
int tt;
bool flg = false;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> tt;
//  cin >> n;
    while(tt --)
    {
        cin >> n >> k;
        cin >> str;
        sort(str.begin(), str.end());

        if(k == 1) {
            cout << str << '\n';
            continue;
        }
        else if(str[k - 1] != str[0]) {
            cout << str[k - 1] << '\n';
            continue;
        }
        else if(str[n - 1] != str[k]) {
            cout << str[0];
            for(int i = k; i < n; i++) {
                cout << str[i];
            }
            cout << '\n';
            continue;
        }else {
            int len = n - 1 - k + 1;
            int tmp = std::ceil(1.00 * len / k) ;
            while(tmp --) {
                cout << str[k];
            }
            if(len % k != 0) cout << str[k];
            cout << '\n';
            
        }
    }
    return 0;
}