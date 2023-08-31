#include <bits/stdc++.h>
using namespace std;
int main() {
    int nPen, ppb1, Pri1, ppb2, Pri2, ppb3, Pri3;
    cin >> nPen >> ppb1 >> Pri1 >> ppb2 >> Pri2 >> ppb3 >> Pri3;
    int nPri1 = (nPen % ppb1 == 0 ? nPen / ppb1 : nPen / ppb1 + 1) * Pri1;
    int nPri2 = (nPen % ppb2 == 0 ? nPen / ppb2 : nPen / ppb2 + 1) * Pri2;
    int nPri3 = (nPen % ppb3 == 0 ? nPen / ppb3 : nPen / ppb3 + 1) * Pri3;
    if(nPri1 < nPri2 && nPri1 < nPri3) {
        cout << nPri1;
    }else if(nPri2 < nPri1 && nPri2 < nPri3) {
        cout << nPri2;
    }else {
        cout << nPri3;
    }
    return 0;
}