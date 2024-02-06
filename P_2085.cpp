#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

const int N  = 1e5 + 100;
const int INF = 0x7fffffff;
using ll = long long;
using LL = ll;

int n, m;
vector<int> a, b, c;
struct node {
    int num, pos, v;
};

priority_queue <node> que;

bool operator<(node x, node y) {
    return x.v > y.v;
}

int data(int num, int pos) {
    return a[num] * pos * pos + b[num] * pos + c[num];
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n >> m;
    node x, y;
    for(int i = 1; i <= n; i++) {
        int t1, t2, t3;
        cin >> t1 >> t2 >> t3;
        a.push_back(t1), b.push_back(t2), c.push_back(t3);
        x.num = i - 1;
        x.pos = 1;
        x.v = data(i - 1, x.pos);
        que.push(x);
    }
    for(int i = 1; i <= m; i++) {
        x = que.top();
        que.pop();
        cout << x.v << " ";
        y = x;
        y.pos++;
        y.v = data(y.num, y.pos);
        que.push(y);
    }
    return 0;
}