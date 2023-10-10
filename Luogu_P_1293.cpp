#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef long long LL;

const int N = 100005;

struct city {
	string s;
	int p, cost;
	int ans; 
};

city c[N];
int n = 0;
int cmp(city a, city b) {
	return a.p < b.p; 
}

int main(){
	cin.tie(0); cout.tie(0);
	LL x, y;
	string str;
	while(cin >> x >> y >> str) {
		n++;
		c[n].s = str;
		c[n].p = x;
		c[n].cost = y;
	} 
	for(int i = 1; i <= n; i++) {//mb
		c[i].ans = 0;
		for(int j = 2; j <= n; j++) {//cz
			//ans +=
			c[j].ans += c[j].p * abs(c[i].cost - c[j].cost);
		}
	}
	sort(c + 1, c + n + 1, cmp);
	cout << c[n].s << " " << c[n].ans;
	return 0;
}