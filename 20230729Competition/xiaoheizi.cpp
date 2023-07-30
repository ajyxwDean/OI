#include <bits/stdc++.h>
using namespace std;
int n;
int a[100005];
// int b[100005];
int b;
int main() {
    freopen("xiaoheizi.in", "r", stdin);
    freopen("xiaoheizi.out", "w", stdout);
    cin >> n;
    for(int i = 0 ; i < n; i++) {
        cin >> a[i];
    }
    cin >> b;
    int flag = 1;
    for(int i = 0; i < n; i++) {
        if(a[i] == b) continue;
        cout << a[i] << " ";
        flag = 0;
    }
    if(flag) cout << "I love kunkun";
    fclose(stdin);
    fclose(stdout);
    return 0;
}