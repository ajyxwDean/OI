#include <bits/stdc++.h>
using namespace std;
int a[10005];
int cf[10005];
int n;
void init(){
    cf[0] = a[0];
    for(int i = 0; i< n; i++){
        cf[i] = a[i] - a[i - 1];//qzh[i] = qzh[i - 1] + cf[i];
    }
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    return 0;
}