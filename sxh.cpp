#include <bits/stdc++.h>
using namespace std;
int pow1(int a, int b) {//a^b
    int ans = a;
    for (int i = 1; i < b; i++) {
        ans *= a;
    }
    return ans;
}
bool isSXH(int aa) {
    int ws = 0;
    int aa1 = aa;
    while(aa1 / 10 != 0) {
        ws++;
        aa1 /= 10;
    }
    ws++;
    int aa2 = 0;
    aa1 = aa;
    while(aa1 / 10 != 0) {
        aa2 += pow1(aa1 % 10, ws);
        aa1 /= 10;
    }
    if(aa2 == aa) {
        return true;
    }else {
        return false;
    }
}
int main() {
    cout << isSXH(153);
    return 0;
}