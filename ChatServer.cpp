#include <bits/stdc++.h>
using namespace std;
int rs, ans;
int main() {
    string s;
    while(getline(cin, s)) {
        if(s[0] == '+') {
            rs++;
        }else if(s[0] == '-') {
            rs--;
        }else {
            for(int i = 0; i < s.size(); i++) {
                if(s[i] == ':') {
                    ans += (s.size() - 1 - i) * rs;
                    break;
                }
            }
        }
    }
    cout << ans;
    return 0;
}