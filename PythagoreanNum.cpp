#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int cnt = 0;
    // for (int c = 0; c < n; c++) {
    //     for(int b = 0; b < c; b++) {
    //         // double a = sqrt(c * c - b * b);
    //         if(sqrt(c * c - b * b) == floor(sqrt(c * c - b * b))) {
    //             cnt++;
    //         }
    //     }
    // }
    for(int c = 1; c <= n; c++) {
        // if (c == 5)
        //     printf("ggg");
        for(int b = 1; b < c; b++) {
            for(int a = 1; a < c; a++) {
                // if(a == 3 && b == 4 && c == 5)
                //     printf("ggg");
                if(a > b)
                    continue;
                if(a * a + b * b == c * c){
                    cnt++;
                    // printf("%d %d %d\n", a, b, c);
                }
            }
        }
    }
    cout << cnt;
    return 0;
}