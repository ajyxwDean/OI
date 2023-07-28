#include <bits/stdc++.h>
using namespace std;
int main() {
    #ifndef LOCAL
        freopen("woniu.in", "r", stdin);
        freopen("woniu.out", "w", stdout);
    #endif
        int t;
        cin >> t;
        for(int i = 0; i < t; i++) {
            int h;
            cin >> h;
            int aa = h / 5;
            if(h == 1) cout << 1 << endl;
            else cout << aa << endl;
            
        }
    #ifndef LOCAL
        fclose(stdin);
        fclose(stdout);
    #endif
}