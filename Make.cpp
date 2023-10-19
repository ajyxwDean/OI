//mk.cpp
#include <iostream>
#include <ctime>
#include <cstring>
#include <cstdlib>
#include <algorithm>

#define int long long
using namespace std;

const int up = 1e8;

inline long long Rand(long long mod = 100000000) {
	int res = ((1ll * rand()) << 28) ^ (rand() << 14) ^ rand();
	return res % mod;
}

signed main() {
    freopen("out.out", "w", stdout);
	srand((long long)new char);
	int n = Rand(1e5);
    printf("%lld\n", n);
    for(int i = 1; i <= n ;i++) {
        int a = Rand(1e5);
        printf("%lld\n", a);
    }
	return 0;
}
