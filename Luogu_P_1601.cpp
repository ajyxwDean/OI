#include <bits/stdc++.h>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int MAXN = 1e5 + 5;typedef unsigned long long ull;
const int INF = 0x7fffffff;
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
int a[MAXN], b[MAXN], c[MAXN];
string sa, sb;
int lena, lenb, len;
//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    cin >> sa >> sb;
    lena = sa.size();
    lenb = sb.size();
    len  = max(lena, lenb);
    reverse(sa.begin(), sa.end());
    reverse(sb.begin(), sb.end());
    for(int i = 0; i < lena; i++) {
        a[i] = sa[i] - '0';
    }
    for(int i = 0; i < lenb; i++) {
        b[i] = sb[i] - '0';
    }
    for(int i = 0; i < len; i++) {
        c[i] += a[i] + b[i];
        if(c[i] >= 10) {
            c[i] -= 10;
            c[i + 1] ++;
        }
    }
    if(c[len] != 0) cout << 1;
    for(int i = len - 1; i >= 0; i--) {
        cout << c[i];
    }
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}