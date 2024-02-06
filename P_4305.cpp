#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
#include <set>

using namespace std;

const int N  = 1e5 + 10;;
const int INF = 0x7fffffff;
using ll = long long;
using LL = ll;

struct Data {
    int val;
    int id;
    bool operator < (const Data &rhs) const {
        return val < rhs.val;
    }
    bool operator > (const Data &rhs) const {
        return val > rhs.val;
    }
    Data(int _val, int _id): val(_val), id(_id) {}
    Data() {}
};
int tt;
int n;
vector<Data> a(N);
set <Data> s;

void Solve();
bool cmp(const Data &lhs, const Data &rhs) ;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> tt;
    while(tt --) Solve();
    return 0;
}

void Solve() {
    cin >> n;
    for (int i = 1; i <= n; i ++) {
        cin >> a[i].val;
        a[i].id = i;
        s.insert(a[i]);
    }
    //s[] : 1 2 3 4 5 6 18 19
    //a[] : 1 2 18 3 3 19 2 3 6 5 4
    a.clear();
    for(auto t : s) {
        a.push_back(t);
    }
    sort(a.begin(), a.end(), cmp);
    for(auto t : a) {
        cout << t.val << ' ';
    }
    cout << '\n';
    s.clear();
    a.clear();
}


bool cmp(const Data &lhs, const Data &rhs) {
    return lhs.id < rhs.id;
}