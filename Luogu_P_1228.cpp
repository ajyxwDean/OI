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

int k, xx, yy;

void solve(int , int , int , int, int) ;


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> k >> xx >> yy;

    ll len = 1 << k;
    
    solve(xx, yy, 1, 1, len);

    return 0;
}
void solve(int x1, int y1, int x2, int y2, int n) {
    if(n == 1) return ;
    if(x1 - x2 < (n >> 1)) {
        if(y1 - y2 < (n >> 1)) {
            std :: cout << (x2 + (n >> 1)) << ' ' << (y2 + (n >> 1)) << ' ' << 1 << std :: endl;
            solve(x1, y1, x2, y2, (n >> 1));
            solve(x2 + (n >> 1) - 1, y2 + (n >> 1), x2, y2 + (n >> 1), (n >> 1));
            solve(x2 + (n >> 1), y2 + (n >> 1) - 1, x2 + (n >> 1), y2, (n >> 1));
            solve(x2 + (n >> 1), y2 + (n >> 1), x2 + (n >> 1), y2 + (n >> 1), (n >> 1));
        } else {
            std :: cout << (x2 + (n >> 1)) << ' ' << (y2 + (n >> 1) - 1) << ' ' << 2 << std :: endl;
            solve(x2 + (n >> 1) - 1, y2 + (n >> 1) - 1, x2, y2, (n >> 1));
            solve(x1, y1, x2, y2 + (n >> 1), (n >> 1));
            solve(x2 + (n >> 1), y2 + (n >> 1) - 1, x2 + (n >> 1), y2, (n >> 1));
            solve(x2 + (n >> 1), y2 + (n >> 1), x2 + (n >> 1), y2 + (n >> 1), (n >> 1));    
        }
    } else {
        if(y1 - y2 < (n >> 1)) {
            std :: cout << (x2 + (n >> 1) - 1) << ' ' << (y2 + (n >> 1)) << ' ' << 3 << std :: endl;
            solve(x2 + (n >> 1) - 1, y2 + (n >> 1) - 1, x2, y2, (n >> 1));
            solve(x2 + (n >> 1) - 1, y2 + (n >> 1), x2, y2 + (n >> 1), (n >> 1));
            solve(x1, y1, x2 + (n >> 1), y2, (n >> 1));
            solve(x2 + (n >> 1), y2 + (n >> 1), x2 + (n >> 1), y2 + (n >> 1), (n >> 1));
        } else {
            std :: cout << (x2 + (n >> 1) - 1) << ' ' << (y2 + (n >> 1) - 1) << ' ' << 4 << std :: endl;
            solve(x2 + (n >> 1) - 1, y2 + (n >> 1) - 1, x2, y2, (n >> 1));
            solve(x2 + (n >> 1) - 1, y2 + (n >> 1), x2, y2 + (n >> 1), (n >> 1));
            solve(x2 + (n >> 1), y2 + (n >> 1) - 1, x2 + (n >> 1), y2, (n >> 1));
            solve(x1, y1, x2 + (n >> 1), y2 + (n >> 1), (n >> 1));
        }
    }
}