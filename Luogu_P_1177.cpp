#include <iostream>
#include <algorithm>
using namespace std;
int n;
int a[10000005];
int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; i ++) {
        cout << a[i];
    }
    return 0;
}