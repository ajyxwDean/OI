#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <map>

using namespace std;
using ll = long long;
using LL = ll;
const int N = 1e5 + 10;
const int INF = 0x7fffffff;
inline void IOS() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
}

void Solve();
void bfs();

queue<string> q;
map<string, int> mp;
string _end, _start = "12345678";

signed main() {
    IOS();
    Solve();
    return 0;
}

void Solve() {
    _end = "";
    for(int i = 1; i <= 8; i++) {
        char t = getchar();
        _end += t;
        getchar();
    }
    cout << _end;
    exit(0);
//  _end -> _start
    bfs();
}

void bfs() {
    
}