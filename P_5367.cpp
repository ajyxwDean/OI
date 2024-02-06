#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

const int N  = 1e6 + 10;
const int INF = 0x7fffffff;
using ll = long long;
using LL = ll;
const int MOD = 998244353;
int n;
vector<int> a(N);
vector<ll> fac(N);
vector<ll> tree(N);

void init();
ll cantor();
int lowbit(int);
void update(int, int);
ll query(int);

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    init();
    cout << cantor() << endl;
    return 0;
}

void init() {
    fac[0] = 1;
    for (int i = 1; i <= n; i++) {
        fac[i] = fac[i - 1] * i % MOD;
        update(i, 1);
    }
    return;
}

ll cantor() {
    ll ans = 0;
    for(int i = 1; i <= n; i++) {
        ans = (ans + ((query(a[i]) - 1) * fac[n - i]) % MOD) % MOD;
        update(a[i], -1);
    }
    return ans + 1;
}
int lowbit(int x) {
	return x & -x;
}
void update(int x, int y) {
	while(x <= n){
		tree[x] += y;
		x += lowbit(x);
	}
}
ll query(int x) {
	ll sum = 0;
	while(x) {
		sum += tree[x];
		x -= lowbit(x);	
	}
	return sum;
}