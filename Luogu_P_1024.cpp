#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <cstdint>
#include <complex>

using namespace std;

double a, b, c, d;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> a >> b >> c >> d;
    // scanf("%d %d %d %d", &a, &b, &c, &d);
    for(double i = -100.00; i <= 100.00; i += 0.001)
    {
        if (fabs (i * i * i * a + i * i * b + i * c + d) < 0.0001)
            cout << fixed << setprecision(2) << i << " ";
    }
    return 0;
}