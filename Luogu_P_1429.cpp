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
#include <cmath>
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
using std::sqrt;
using std::abs;
#ifdef STL_INCLUDE
using std::queue;
using std::stack;
using std::deque;
using std::list;

#endif

double Distance(Point a, Point b) ;
bool Comapre(Point f, Point s);

struct Point {
    double x, y;
};

Point p[N];
int n;
const ll INF = 0xffffffffff;
ll ans = -INF;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> p[i].x >> p[i].y;
    }
    

    return 0;
}

double Distance (Point a, Point b)
{
    return (double)(sqrt(fabs(a.x - b.x) * fabs(a.x - b.x) + fabs(a.y - b.y) * fabs(a.y - b.y)));
}

bool Compare(Point f, Point s)
{
    return f.x < s.x;
}