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
const int mx = 1e5 + 10;
int n, m;
struct T{
    int l, r;
	int d;
}t[mx]={0};
void add(int i, int k, int f)
{
    if(f == 1) {
        t[k].r = t[i].r;
        t[k].l = i; 
        t[i].r = k;
        t[t[k].r].l = k;
    }
    else
    {
        t[k].r = i;
        t[k].l = t[i].l;
        t[i].l = k;
        t[t[k].l].r = k;
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);


    int x, k, f;
    cin >> n;
    t[0].r = 0, t[0].l = 0;
    add(0, 1, 1);
    for (int i = 2; i <= n; i ++)
    {
        cin >> x >> f;
        add(x, i, f);
    }
    cin >> m;
    while(m --)
    {
        cin >> x;
        t[x].d = 1;         
    }
    for (int i = t[0].r; i; i = t[i].r)
    {
        if (t[i].d == 0)    
            cout << i << " ";
    }
    return 0;
}