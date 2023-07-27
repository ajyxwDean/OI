#include <bits/stdc++.h>
using namespace std;
int main() {
    int sz = 0;
    int xx = 0;
    int dx = 0;
    string a;
    cin >> a;
    for(int i = 0; i < 8; i++) {
        if(a[i] >= '0' && a[i] <= '9') {
            sz++;
        }else if(a[i] >= 'a' && a[i] <= 'z') {
            xx++;
        }else if(a[i] >= 'A' && a[i] <= 'Z'){
            dx++;
        }
    }
    cout << sz << " " << xx << " " << dx;
    return 0;
}
