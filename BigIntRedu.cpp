//Big Int Reduce 1s 256MB
//高精减
#include <bits/stdc++.h>
using namespace std;
#define MAXN 245
string sa,sb;
int a[MAXN], b[MAXN], c[MAXN];
int main() {
    cin >> sa >> sb;
    if(sa.size() < sb.size() || (sa.size() == sb.size() && sa < sb)) {
        cout << "-";
        swap(sa,sb);
    }
    reverse(sa.begin(), sa.end());
    reverse(sb.begin(),sb.end());
    int len = max(sa.size(), sb.size());
    for(int i = 0; i < sa.size(); i++) a[i] = sa[i] - '0';
    for(int i = 0; i < sb.size(); i++) b[i] = sb[i] - '0';
    for(int i = 0; i < len; i++) {
        c[i] = a[i] - b[i];
        if(c[i] < 0) {//借位
            //0 - c[i] 1
            c[i] += 10;
            a[i + 1] --;//高位借1
        }
    }
    // if(c[len] == 0) len--;
    int idx = len - 1;
    while(c[idx] == 0 && idx >= 1) {
        idx--;
        len--;
    }
    for(int i = len - 1; i >= 0; i--) cout << c[i];
    return 0;
}
/*
高位前导0:
a 0 0 0 1
b 9 9 9
---------           i
  1 0 0 0 --> 0 0 0 1
*/