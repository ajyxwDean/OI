/*#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y, z, n, m;
    int cnt = 0;
    cin >> x >> y >> z >> n >> m;
    for (int gj = 0; gj < n / x;gj++) {
        for (int mj = 0; mj < n / y; mj++) {
            int xj = (n - gj * x - mj * y) * z;
            if(gj + mj + xj == m) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int sum = 0;
    for(int i = 1; i <= 20; i++) {
        if(20 % i == 0)
            sum += i;
    }
    cout << sum << endl;
    return 0;
}