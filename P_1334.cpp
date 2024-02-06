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

ll n, sum = 0;
priority_queue<ll, vector<ll>, greater<ll> > pq;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }
    while(pq.size() > 1) {
        int t = pq.top();
        pq.pop();
        int t1 = pq.top();
        pq.pop();
        sum += t + t1;
        pq.push(t1 + t);
    }
    cout << sum ;
    return 0;
}