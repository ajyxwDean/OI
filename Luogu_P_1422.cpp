// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main() {
//     int Electr;
//     cin >> Electr;
//     double ans = 0;
//     // if(Electr <= 150) {
//     //     ans = Electr * 0.4663;
//     // }
//     ans += Electr > 150 ? 150 * 0.4463 : Electr * 0.4463;
//     Electr -= 150;
//     if(Electr < 0) {
//         cout << fixed << setprecision(1) << ans;
//         return 0;
//     }
//     ans += Electr < 400 ? Electr * 0.4663 : 250 * 0.4663;
//     Electr -= 250;
//     if(Electr < 0) {
//         cout << fixed << setprecision(1) << ans;
//         return 0;
//     }
//     cout << fixed << setprecision(1) << ans + Electr * 0.5663;
//     return 0;
// }
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int Electr;
    cin >> Electr;
    if(Electr <= 150) {
        cout << fixed << setprecision(1) << Electr * 0.4463;
    }else if(Electr > 150 && Electr < 400) {
        cout << fixed << setprecision(1) << (Electr - 150) * 0.4663 + 150 * 0.4463;
    }else {
        cout << fixed << setprecision(1) << 150 * 0.4463 + (400 - 150) * 0.4663 + (Electr - 400) * 0.5663;
    }
    return 0;
}