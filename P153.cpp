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
const int INF = 0x7ffffff;

using ll = long long;
using LL = ll;
using std::cin;
using std::cout;
using std::ios;
using VI = std::vector<int> ;

int n, m;
// VII a;
VI a[N];
ll mx = -INF;
int flg = 0;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
    }
    for(int i = 0; i < n; i++) {
        if(mx < a[i].size()) {
            flg = i;
            mx = a[i].size();
        }
    }
    
    return 0;
}