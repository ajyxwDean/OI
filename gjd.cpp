#include <bits/stdc++.h>
using namespace std;
string sa, sb;
#define MAXN 10005
int a[MAXN],  b[MAXN];
int c[MAXN];
int len, lena, lenb;
int main() {
    cin >> sa >> sb;
    lena = sa.size();
    lenb = sb.size();
    reverse(sa.begin(), sa.end());
    reverse(sb.begin(), sb.end());
    for(int i = 0; i < lena; i++) {
        a[i] = sa[i] - '0';
    }
    for(int i = 0; i < lenb; i++) {
        b[i] = sb[i] - '0'; 
    }
    return 0;
}