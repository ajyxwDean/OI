#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

const int N = 1e6 + 5;
typedef long long LL;

struct Person{
    int l, r;
};

bool cmp(Person const& lhs, Person const& rhs) ;

Person a[N];
int n;

int main() {
    scanf("%d", &n);
    scanf("%d %d", &a[0].l, &a[0].r);
    for(int i = 1;i <= n; i++)
    {
        scanf("%d %d", &a[i].l, &a[i].r);
    }
    sort(a + 1, a + n + 1, cmp);
    int ans = -0x7fffffff;
    int product = a[0].l;
    for(int i = 1; i <= n; i++)
    {
        int k = product / a[i].r;
        product *= a[i].l;
        if(k > ans) ans = k;
    }
    printf("%d\n", ans);
    return 0;
}

bool cmp(Person const& lhs, Person const& rhs)
{
    return lhs.l * lhs.r < rhs.l * rhs.r;
}