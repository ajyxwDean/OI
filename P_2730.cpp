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
void Update(string );

string s, a, b, c;
queue<string> q;
map<string, string> mp;

signed main() {
    IOS();
    Solve();
    return 0;
}

void Solve() {
    for(int i = 1; i <= 8; i++) {
        char t = getchar();
        s += t;
        getchar();
    }
//  _end -> _start
    bfs();
}

void bfs() {
    q.push("12345678");
    mp["12345678"] = "";
    while (!q.empty()) {
        /* code */
        string t = q.front();
        Update(t);
        if(a == s) {
            
        }
    }
}

void Update(string s) {
    a += s[4];
    a += s[5];
    a += s[6];
    a += s[7];
    a += s[0];
    a += s[1];
    a += s[2];
    a += s[3];
    b += s[3];
    b += s[0];
    b += s[1];
    b += s[2];
    b += s[7];
    b += s[4];
    b += s[5];
    b += s[6];
    c += s[0];
    c += s[6];
    c += s[1];
    c += s[3];
    c += s[7];
    c += s[5];
    c += s[2];
    c += s[4];
}