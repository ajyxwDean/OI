#include <bits/stdc++.h>
using namespace std;
struct city {
	int ans, l, p;
    string s;
}c[150];
int n;
bool cmp(city a, city b) {
	if(a.ans != b.ans) return a.ans < b.ans;
    else return a.l < b.l;
}

int main(){
    // freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);
    while(cin >> c[n].p >> c[n].l >> c[n].s) n ++;//{
    //     if(c[n].s == "Moscow" && !c[n].l) break;
    //     else n++;
    // }
    for(int i = 0; i < n; i++) {
		c[i].ans = 0;
		for(int j = 0; j < n; j++) {
            c[i].ans += abs(c[j].l - c[i].l) * c[j].p;
		}
	}
	sort(c, c + n, cmp);
	cout << c[0].s << ' ' << c[0].ans;
    // fclose(stdin);
    // fclose(stdout);
	return 0;
}