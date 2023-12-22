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

int n;
// int a[N];
#include <set>
std::set<int> st;

// typedef std::set<int>::iterator Iter;
using Iter = std::set<int>::iterator;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        st.insert(x);
    }
    cout << st.size() << '\n';
    for(Iter it = st.begin(); it != st.end(); it++) {
        cout << *it << " ";
    }
    return 0;
}