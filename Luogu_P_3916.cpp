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

int n, m;
std::vector< int > a[N];
int vis[N];

void dfs(int s) ;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= m; i++) 
    {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
    }
    return 0;
}