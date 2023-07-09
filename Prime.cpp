/// @file Prime.cpp
/// @brief print the Prime before n
/// @author LStylusAFO
/// @version v1.0.0
/// @date 2023.6.10

#include <bits/stdc++.h>
using namespace std;

///@brief 判断n是否为质数
/// @param n 需要判断的数
///@retval 1 是质数
///@retval 0 不是质数
///@retval -1 错误参数为一
///@warning n != 1
// int isPrime(int n1) {
//     using std::sqrt;
//     if(n1 == 1)
//         return -1;
//     if(n1 == 2 || n1 == 3 || n1 == 5 || n1 == 7 || n1 == 11 || n1 == 13 || n1 == 17 || n1 == 19)
//         return 0;
//     for(int i = 1; i * i <= n1; i++) {
//         if(n1 % i == 0)
//             return 0;
//     }
//     return 1;
// }

int main()
{
    int n;
    cin >> n;
    for(int m = 2; m <= n; m++) {
        bool isprime = true;
        for (int i = 2; i < m; i++) {
            if(m % i == 0){
                isprime = false;
                break;
            }
        }
        if(isprime)
            cout << m << endl;
    }
    return 0;
}