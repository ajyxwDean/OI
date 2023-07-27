#include <bits/stdc++.h>
using namespace std;
double eps = 1e-9; //10 ^ (-9)
int main() {
    int n;
    cin >> n;
    //1.确定区间
    double L = 0, R = n, mid;
    while(R - L > eps) {
        mid = (L + R) / 2;
        if(mid * mid < n) {
            L = mid;
        }else {
            R = mid;
        }
    }
    if(n < 0) cout << -1;
    else printf(".5f",L);
}