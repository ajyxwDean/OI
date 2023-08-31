#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int x;
    cin >> n >> x;
    stringstream ss;
    for(n++; --n; ss << n);
    string s = ss.str();
    cout << count(s.begin(), s.end(), x + '0');
    return 0;
}