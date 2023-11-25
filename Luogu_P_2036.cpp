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

int a[N];
int b[N];
int n;
int ans = 1 << 30;

int main()
{
    int n;
    int ans = 1 << 30;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for(int s = 1; s < (1 << n); s++) {
        int tots = 1, totc = 0;
        for(int i = 0; i < n; i++)
        {
            if(s & (i << i)) {
                tots *= a[i];
                totc += b[i];
            }
        }
        ans = min(ans, abs(tots - totc));
    }
    cout << ans << '\n';
    return 0;
}