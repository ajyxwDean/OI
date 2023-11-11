#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <iomanip>
using namespace std;
typedef long long LL;
struct Point {
	LL time;
	short flg;
}a[200020];
LL nt, rt, bt, ans = 0;
int n;
bool cmp(Point a, Point b) {
	if(a.time != b.time) return a.time < b.time;
	else return a.flg > b.flg;
}
int main() {
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> a[2 * i].time >> a[2 * i + 1].time;
		a[2 * i].flg = 1,a[2 * i + 1].flg = -1;
	}

	sort(a, a + 2 * n, cmp);
	for(int i = 0; i < 2 * n; ++i) {
		nt = rt + a[i].flg;
		if(nt == 0 && rt == 1) {
			//bt = a[i].time;
			ans += a[i].time - bt + 1;
		}else if(nt == 1 && rt == 0) {
			bt = a[i].time;
		}
		rt = nt;
	}
	printf("%d", ans);
	return 0;
}