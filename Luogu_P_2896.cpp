#include <bits/stdc++.h>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int MAXN = 1e5 + 5;typedef unsigned long long ull;
#define ll                 long long
#define LL                 long long
template <typename T>inline void read(T &a){
    T s = 0, w = 1; char ch = getchar();
    while (!isdigit(ch)){
        if (ch == '-') w = -1; 
        ch = getchar();
    }
    while (isdigit(ch)) s = s * 10 + ch - 48,ch = getchar();
    a = s * w;
}
//=============================
int n;
int a[MAXN];
int dp[MAXN], dp1[MAXN];
int flag = 0;
//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    
    read(n);
    for(int i = 1; i <= n; i++) read(a[i]);
    int cnt = 1;
    dp[1] = a[1];
    for(int i = 2; i <= n; i++) { 
        if(a[i] >= dp[cnt]) dp[++cnt] = a[i];
        else *upper_bound(dp + 1, dp + cnt + 1, a[i]) = a[i];
    }
    int ans = cnt;  
    cnt = 1;
    dp1[cnt] = a[1];
    for(int i = 2; i <= n; i++) {
        if(a[i] <= dp1[cnt]) dp1[++cnt] = a[i];
        else *upper_bound(dp1 + 1, dp1 + cnt + 1, a[i], greater<int>()) = a[i];
    }
    cout << n - max(cnt, ans) << endl;
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}