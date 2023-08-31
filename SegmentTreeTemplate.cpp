#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define size_t ll
size_t n, m;
const size_t MAXN = 10005;
ll tree[MAXN], A[MAXN];
ll Mark[MAXN];
inline ll push_down(ll Point, ll nowLeft, ll nowRight) {
    ll Middle = (nowLeft + nowRight) / 2;
    Mark[2 * Point + 1] += Mark[Point];
    Mark[2 * Point] += Mark[Point];
    tree[Point * 2] += Mark[Point] * (Middle - nowLeft + 1);
    tree[Point * 2 + 1] += Mark[Point] * (nowRight - Middle);
    Mark[Point] = 0;
    return Middle;
}
/// @brief build a Segment Tree
/// @details Segment Tree
/// @param l Left of Section
/// @param r Right of Section
/// @param p Node now
void build(size_t l = 1, size_t r = n, size_t p = 1) {
    if(l == r) 
        tree[p] = A[l];
        return ;
    ll mid = (l + r) / 2;
    build(l, mid, 2 * p);
    build(mid + 1, r, 2 * p + 1);
    tree[p] = tree[p * 2] + tree[p * 2 + 1];
}
void update(size_t targetLeft, size_t targetRight, ll addVal/*ll _Long*/, ll Point = 1, size_t nowLeft = 1, size_t nowRight = n) {
    if(nowLeft > targetRight || nowRight < targetLeft)
        return ;
    else if(nowLeft >= targetLeft && nowRight <= targetRight) {
        tree[Point] += (nowRight - nowLeft + 1) * addVal;
        if(nowRight != nowLeft)
            Mark[Point] += addVal;
    }else {
        int Middle = push_down(Point, nowLeft, nowRight);
        update(targetLeft, targetRight, addVal, Point, nowLeft, Middle);
        update(targetLeft, targetRight, addVal, Point, Middle + 1, nowRight);
        tree[Point] = tree[Point * 2] + tree[Point * 2 + 1];
    }
}
ll query(size_t targetLeft, size_t targetRight, ll Point = 1, size_t nowLeft = 1, size_t nowRight = n) {
    if(nowLeft > targetRight || nowRight < targetLeft) return 0;
    else if(nowLeft <= targetLeft && nowRight >= targetRight) return tree[Point];
    else {
        ll Middle = (nowLeft + nowRight) / 2;
        push_down(Point, nowLeft, nowRight);
        return query(targetLeft, targetRight, Point, nowLeft, Middle) + query(targetLeft, targetRight, Point, Middle + 1, nowRight);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        cin >> A[i];
    }
    build();
    while(m--) {
        int o, l, r, d;
        cin >> o >> l >> r;
        if(o == 1) {
            cin >> d, update(l, r, d);
        }else {
            cout << query(l, r) << endl;
        }
    }
    return 0;
}