#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

const int N  = 26;
const int INF = 0x7fffffff;
using ll = long long;
using LL = ll;

int n;
string s;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n;
    cin >> s;
    for(int i = 2; i <= n; i++) {
        string tmp;
        cin >> tmp;
        int t = s.find(tmp[0]);
        s.erase(t, 1);
        s.insert(t, tmp);
    }
    for(int i = 0; i < s.size(); i++) 
        if(s[i] != '*') cout << s[i];

    return 0;
}