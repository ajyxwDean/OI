#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
    int _Tar;
    int a[105];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> _Tar;
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if(a[mid] > _Tar) 
            l = mid + 1;
        else if(a[mid] < _Tar) 
            r = mid - 1;
        else {
            cout << n;
            return 0;
        }
    }
    
    return 0;
}