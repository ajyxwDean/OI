#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;

const int N = 110;
typedef long long LL;
typedef LL ll;
// typedef __uint_128_t INT128;


ll n;
ll t;
struct Things
{
    /* Things in Package */
    LL m, v, avg;
}a[N];

bool cmp(Things const& lhs, Things const& rhs) ;


float ans = 0;

int main() {
    scanf("%lld%lld", &n, &t);
    for(int i = 0; i < n; i++)
    {
        scanf("%lld%lld", &a[i].m, &a[i].v);
        a[i].avg = a[i].v * a[i].m;
    }
    sort(a, a + n, [&](Things lhs, Things rhs) {
        return lhs.v * rhs.m < rhs.v * lhs.m;
    });
    int i;
    for(i = 0; i < n; i++)
    {
        if(t < a[i].m) break;
        ans += a[i].v;
        t -= a[i].m;
    }
    if(i < n) ans += 1.0 * t * a[i].v / a[i].m;

    printf("%.2lf", ans);

    return 0;
}


bool cmp(Things const& lhs, Things const& rhs)
{
    return lhs.v * rhs.m < rhs.v * lhs.m;
}