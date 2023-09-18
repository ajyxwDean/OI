#include <bits/stdc++.h>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int MAXN = 1e5 + 5;typedef unsigned long long ull;
const int INF = 0x7fffffff;
#define lowbit(x) ((x) & (-x))
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
template <typename T, typename...Args>
inline void read(T& t, Args &...args) {
    read(t), read(args...);
}
//=============================
int lenq, lena;
int a[MAXN];
int tree[MAXN];
inline void update(int i, int x) { 
    for(int pos = i; pos < lena; pos += lowbit(pos)) {
        tree[pos] += x;
    }
}
inline int query(int n) {
    int ans = 0;
    while(n >= 0) {
        ans += tree[n];
        n -= lowbit(n);
    }
    return ans;
}
inline int query(int l, int r) {
    return query(r) - query(l - 1);
}
//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    read(lena, lenq);
    for(int i = 0; i < lena; i++) {
        read(a[i]);
    }
    for(int i = 0; i < lenq; i++) {
        int op, Val1, Val2;
        read(op, Val1, Val2);
        if(op == '1') {
            //Update
            update(Val1, Val2);
        }else {
            cout << query(Val1, Val2) << " ";
        }
    }
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}