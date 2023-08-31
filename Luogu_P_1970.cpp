#include <bits/stdc++.h>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int MAXN = 1e5 + 5;typedef unsigned long long ull;
#define ll                 long long
#define LL                 long long
template <typename T>inline void read(T &a){
    T s = 0, w = 1; char ch = getchar();
    while (!isdigit(ch)){
        if (ch == '-') w = -1; ch = getchar();
    }
    while (isdigit(ch)) s = s * 10 + ch - 48,ch = getchar();
    a = s * w;
}
int n;
int a[MAXN];
int d1[MAXN], d2[MAXN];
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    read(n);
    for(int i = 1; i <= n; i++) read(a[i]);
    d1[1] = d2[1] = 1;
    for(int i = 2; i <= n; i++) {
        if(a[i] > a[i - 1]) d1[i] = max(d1[i - 1], d2[i - 1] + 1), d2[i] = d2[i - 1];
        else if(a[i] < a[i - 1]) d2[i] = max(d2[i - 1], d1[i - 1] + 1), d1[i] = d1[i - 1];
        else d1[i] = d1[i - 1], d2[i] = d2[i - 1];
    }
    cout << max(d1[n], d2[n]) << " ";
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}