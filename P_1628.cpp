#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

const int N  = 1e5 + 10;;
const int INF = 0x7fffffff;
using ll = long long;
using LL = ll;

int n;
vector<string> a;
// vector<string> ans;
string s;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++) {
        string x; cin >> x;
        a.push_back(x);
    }
    cin >> s;
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) if(a[i].find(s) == 0) cout << a[i] << '\n';
    return 0;
}