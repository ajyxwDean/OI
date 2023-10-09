//mk.cpp
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int up = 1e8;
inline long long Rand(long long mod = 100000000) {
	int res = ((1ll * rand()) << 28) ^ (rand() << 14) ^ rand();
	return res % mod;
}
signed main() {
	srand((long long)new char);
	int a = Rand();
	cout << a << endl;
	int b = Rand();
	cout << b << endl;
	return 0;
}
