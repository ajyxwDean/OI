#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

const int N  = 1000002;
const int INF = 0x7fffffff;
using ll = long long;
using LL = ll;

struct node {
    ll l, r, val;
};

node bt[N];

bool same(ll now1, ll now2);
int count(ll now) {
    return now == -1 ? 0 : count(bt[now].l) + count(bt[now].r) + 1;
}

int F1() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int n, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> bt[i].val;
    for(int i = 1; i <= n; i++) cin >> bt[i].l >> bt[i].r;
    for(int i = 1; i <= n; i++) if(same(i, i)) ans = max(ans, count(i));
    cout << ans;//
    return 0;
    return 0;
}

bool same(ll now1, ll now2) {
    if(now1 == -1 && now2 == -1) return true;
    if(now2 == -1 || now1 == -1) return false;
    if(bt[now1].val != bt[now2].val) return false;
    return same(bt[now1].l, bt[now2].r) && same(bt[now2].r, bt[now1].l);
}

int F2() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int n, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> bt[i].val;
    for(int i = 1; i <= n; i++) cin >> bt[i].l >> bt[i].r;

    
    return 0;
}

signed main() {

}