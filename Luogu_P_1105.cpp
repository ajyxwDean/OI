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
const int N = 2e3 + 7;

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

struct node {
    int h;
    int l;
    int r;
};

int n, h[N], ans[2][N], l[N], r[N];

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> h[i] >> l[i] >> r[i];
	for (int i = 1; i <= n; i++)
	{
		int H1 = 0, H2 = 0;
		for (int j = 1; j <= n; j++)
		{
			if (H1 < h[j] && h[j] < h[i] && l[j] < l[i] && l[i] < r[j])
				ans[0][i] = j, H1 = h[j];
			if (H2 < h[j] && h[j] < h[i] && l[j] < r[i] && r[i] < r[j])
				ans[1][i] = j, H2 = h[j];
		}
        cout << ans[0][i] << " " << ans[1][i] << '\n';
	}
    return 0;
}