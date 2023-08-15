//【深基4.例6】数字直角三角形
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int prefix = 1;
    for(int i = n; i >= 1; i--) {
        //i 当前层个数
        for(int j = prefix; j <= prefix + i - 1; j++) {
            printf("%02d", j);
        }
        printf("\n");
        prefix = prefix + i;
    }
    return 0;
}