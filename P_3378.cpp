#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

const int N  = 1e5 + 10;;
const int INF = 0x7fffffff;
using ll = long long;
using LL = ll;

priority_queue <int, vector<int>, greater<int> > que;
int n;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n;
    while(n --) {
        int op;
        cin >> op;
        if(op == 1) {
            int x;
            cin >> x;
            que.push(x);
        }else if(op == 2) {
            cout << que.top() << '\n';
        }else {
            que.pop();
        }
    }
    return 0;
}