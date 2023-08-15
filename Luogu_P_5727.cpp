//【深基5.例3】冰雹猜想
#include <bits/stdc++.h>
using namespace std;
int a[1005], cnt = 1;
int main() {
    int n;
    cin >> n;
    while(n != 1) {
        a[cnt] = n;
        cnt++;
        if(n % 2 == 0) n /= 2;
        else n = n * 3 + 1;
    }
    a[cnt] = 1;
    for(int i = cnt; i >= 1; i--) {
        cout << a[i] << " ";
    }
    return 0;
}