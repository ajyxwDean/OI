#include <bits/stdc++.h>

using namespace std;

int main() {
    int s1 = 0, s2 = 0, m, s, t;
    cin >> m >> s >> t;
    int m1 = m;
    for(int i = 1; i <= t; i++) {
        s1 += 17;   
        if(m >= 10) {
            s2 += 60;
            m1 -= 10;
        }else {
            m1 += 4;
        }
        if(s2 > s1) s1 = s2;
        if(s1 > s) {
            cout <<"Yes"<< endl << i << endl;
            return 0;
        }
    }
    cout << "No" << endl << s1 << endl;
    return 0;
}