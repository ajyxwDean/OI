//【深基7.例1】距离函数
//sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
#include <bits/stdc++.h>
using namespace std;
double dis(double x1, double x2, double y1, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
int main() {
    double n1, n2, n3, m1, m2, m3;
    cin >> n1 >> m1 >> n2 >> m2 >> n3 >> m3;
    printf("%.2lf", dis(n1, n2, m1, m2) + dis(n1, n3, m1, m3) + dis(n2, n3, m2, m3));
    return 0;
}