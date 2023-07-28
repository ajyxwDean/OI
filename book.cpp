#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b) {
    return a > b;
}
int main() {
    #ifndef LOCAL
        freopen("book.in", "r", stdin);
        freopen("book.out", "w", stdout);
    #endif
    int n;
    cin >> n;
    int b;
    cin >> b;
    int a[20005];
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a, a+n, cmp);
    int j = 0;
    int cnt = 0;
    int hei = 0;
    while(hei < b) {
        hei += a[j];
        cnt++, j++;
    }
    cout << cnt;
    #ifndef LOCAL
        fclose(stdin);
        fclose(stdout);
    #endif
    return 0;
}