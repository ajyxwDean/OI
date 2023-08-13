//BigIntTempl.cpp
//1s 125MB
#include <bits/stdc++.h>
using namespace std;
#define MAXN 1005
int a[MAXN], b[MAXN];
string sa, sb;
int c[MAXN];

int main(){
    cin >> sa >> sb;
    int lena = sa.size();
    int lenb = sb.size();
    int lenc = max(lena, lenb);
    reverse(sa.begin(), sa.end());
    reverse(sb.begin(), sb.end());
    for(int i = 0; i < lena; i++) {
        a[i] = sa[i] - '0';
    }
    for(int i = 0; i < lenb; i++) {
        b[i] = sb[i] - '0';
    }
    for(int i = 0; i < lenc; i++) {
        c[i] += a[i] + b[i];
        if(c[i] >= 10) {
            c[i - 1] ++;
            c[i] %= 10;
        }
    }
    if(c[lenc] > 0) lenc++; 
    for(int i = 0; i < lenc; i++) {
        cout << c[i];
    }
    return 0;
}
//Q
//WA WA WA AC WA --> 20scores