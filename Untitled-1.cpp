#include <bits/stdc++.h>
using namespace std;
int a[20005];
int b[20005];
int main() {
	int n;
	int m;
	cin >> n;
	cin >> m;
	for(int i = 0; i < n; i++) {
		cin >> a[i];//wcnmd
	}
	for(int i = 0; i < m; i++) {
		cin >> b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
    int ans = 0;
	for(int i =0; i < n; i++) {
		if(a[i] >= b[i]) {
			ans += b[i];
		}else if(a[i] >= b[i + 1]){
            ans += b[i + 1];
        }else {
            cout << "you died!";
            return 0;
        }
	}
    //4 1 1 2 3
 	return 0;   
}//贪心,二分