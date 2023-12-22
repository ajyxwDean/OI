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
#include <set>
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
std::set < int > st[N];
int vis[N];
std::queue< int > que;

void dfs(int s) ;
void bfs(int s) ;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n >> m;
    while(m --)
    {
        int u, v;
        cin >> u >> v;
        st[u].insert(v);
    }
    dfs(1);
    cout << '\n';
    memset(vis, 0, sizeof(vis));
    bfs(1);
    cout << '\n';
    return 0;
}

void dfs(int s) 
{
    if(vis[s]) return ;
    vis[s] = 1;
    cout << s << " ";
    for(int t : st[s]) dfs(t);
}

void bfs(int s) {
    que.push(s);
    while(!que.empty()) {
        int x = que.front();
        que.pop();
        if(vis[x]) continue;
        vis[x] = 1;
        cout << x << " ";
        for(int v : st[x]) que.push(v);
    }
}