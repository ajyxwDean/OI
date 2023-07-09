// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < i; j++) {
            
//         }
//     }
//         return 10060;
// }
// SSS SAS ASA AAS HL
/*#include <iostream>
using namespace std;
int main() {
    int n = 17;
    bool prime = true;
    for(int i = 2; i <= n; i++) {
        if(n % i == 0)
            prime = false;
    }
    cout << prime << endl;
}*/
/// SSS SAS ASA AAS HL
///@param a a
#include <bits/stdc++.h>
using namespace std;
int a;
void Main() {
    int n = 17;
    bool isPrime = true;
    for (int i = 2; i <= n; i++) {
        if(n % i == 0)
            isPrime = false;
    }
    cout << isPrime;
}
int main() {
    Main();
    return 0;
}


