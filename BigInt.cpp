#include <bits/stdc++.h>
using namespace std;
#define MAXN 105
string sa,sb;
int c[MAXN], b[MAXN], a[MAXN];
int main() {
    cin >> sa >> sb;
    reverse(sa.begin(), sa.end());
    reverse(sb.begin(), sb.end());
    int len = max(sa.size(), sb.size());
    for(int i = 0; i < sa.size(); i++) {
        a[i] = sa[i] - '0';
    }
    for(int i = 0; i < sb.size(); i++) {
        b[i] = sb[i] - '0';
    }
    for(int i = 0; i < len; i++) {
        c[i] += a[i] + b[i];
        if(c[i] >= 10) {
            c[i] -= 10;
            c[i + 1] ++; //高位进1
        }
    }
    if(c[len] > 0) cout << 1;
    for(int i = len - 1; i >= 0; i--) cout << c[i];
    return 0;
}