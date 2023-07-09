/**
* @file sum.cpp
* @brief print sum
* @author LStylusAFO
* @version v1.0.0
* @date 2023.6.10
*/
#include <bits/stdc++.h>
                                                                                                           using namespace std; 
/// @brief main function
/// @return 0
int main() {
    int sum = 0;
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    cout << sum;
}