#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

const int N  = 1e5 + 10;;
const int INF = 0x7fffffff;
using ll = long long;
using LL = ll;

int n;
string s;

void Contr(int l, int r) ;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n;
    cin >> s;
    Contr(1, pow(2, n));
    return 0;
}

void Contr (int l, int r) {
    int mid = (l + r) >> 1;
    if(l != r) {
        Contr(l, mid);
        Contr(mid + 1, r);
    }
    int cnt1 = 0;
    int cnt0 = 0;
    for(int i = l; i <= r; i++) {
        if(s[i] == 1) cnt1 ++;
        else cnt0 ++;
    }
    if(cnt1 && cnt0) cout << 'F';
    else if(cnt0) cout << 'B';
    else cout << 'I';
}