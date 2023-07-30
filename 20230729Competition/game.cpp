#include <bits/stdc++.h>
using namespace std;
string str;
int m;
int zl;
string cs;
int k;
int main() {
    freopen("game.in", "r", stdin);
    freopen("game.out", "w", stdout);
    cin >> str;
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> zl;
        if(zl == 1) {
            reverse(str.begin(), str.end());
        }else if(zl == 2) {
            cin >> cs;
            str = str + cs;
        }else if(zl == 3) {
            str = str + "yyds";
        }else {
            for(int i = 0; i < str.size(); i++) {
                if(str[i] == 'a') {
                    str[i] = 'x';
                }else if(str[i] == 'b'  ) {
                    str[i] = 'y';
                }else if(str[i] == 'c') {
                    str[i] = 'z';
                }else {
                    str[i] -= 3;
                }
            }
        }
    }
    cin >> k;
    cout << str[k - 1];
    fclose(stdin);
    fclose(stdout);
    return 0;
}