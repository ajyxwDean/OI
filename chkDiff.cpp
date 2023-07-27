#include <bits/stdc++.h>
#include "cDiffPre.h"
using namespace std;
int n,q,l,r,c;
int a[100005];

int main(){
    cin >> n >> q;
    Diff<int> _a;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < q; i++){
        cin >> l >> r >> c;
        _a.calcIntrv(l,r,c);
    }
    _a.printArr();
    return 0;
}