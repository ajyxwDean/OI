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

const int INF = 0x7fffffff;

int n, mn = INF;
int a[12];
int b[12];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
    for(int i = 1; i < (1 << n); i++)
    {
        int s = 1, bi = 0;
        for(int j = 0; j < n; j++) {
            if((i >> j) & 1)
            {
                s *= a[j];
                bi += b[j];
            }
        }
        mn = min(mn, abs(s - bi));
    }
    cout << mn;
    return 0;
}