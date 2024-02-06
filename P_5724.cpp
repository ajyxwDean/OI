#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;
using ll = long long;
using Iter = vector<int>::iterator;

vector<int> a;
int n;

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
		
	cin >> n;
	for(int i = 1; i <= n; i++) {
		int x; cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end());
    cout << a.back() - a.front();
	return 0;
}