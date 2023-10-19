#include <bits/stdc++.h>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int N = 1e5 + 5;typedef unsigned long long ull;
const int INF = 0x7fffffff;
#define RI register int;
#define ll long long
#define LL long long
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
inline void read(T& t, Args&...args) {
    read(t), read(args...);
}
//=============================
LL k, n, e, d;
//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    scanf("%lld", &k);
    while(k--) {
        scanf("%lld %lld %lld", &n, &e, &d);
        LL psq = sqrt((n - e * d + 2) * (n - e * d + 2) - (n * 4));
        LL paq = n - e * d + 2;
        LL p = (paq + psq) / 2;
        LL q = paq - p;
        if(p && q && p * q == n && e * d == (p - 1) * (q - 1) + 1) {
            printf("%lld %lld\n", min(p, q), max(p, q));
        }else {
            printf("NO\n");
        }
    }
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}