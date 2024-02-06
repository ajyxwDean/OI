#include <algorithm>
#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
using ll = long long;
using LL = ll;
const int N = 1e5 + 10;
const int INF = 0x7fffffff;

void Solve();
string s;
int cnt = 0;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') cnt++;
    }
    cout << cnt << '\n';
    return 0;
} 