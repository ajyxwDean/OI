#include <bits/stdc++.h>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int MAXN = 1e5 + 5;typedef unsigned long long ull;
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
int a[MAXN][2], f[MAXN][2];
int n;
int dis(int a, int b) {
    return abs(a - b);
}
//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    read(n);
    for(int i = 1; i <= n; i++) {
        read(a[i][0], a[i][1]);
    }
    f[1][0]=dis(a[1][1],1)+dis(a[1][1],a[1][0]);
	f[1][1]=dis(a[1][1],1);
    for(int i=2;i<=n;i++)
	{
		f[i][0]=min(f[i-1][0]+dis(a[i-1][0],a[i][1])+dis(a[i][1],a[i][0]),f[i-1][1]+dis(a[i-1][1],a[i][1])+dis(a[i][1],a[i][0]))+1;
		f[i][1]=min(f[i-1][0]+dis(a[i-1][0],a[i][0])+dis(a[i][0],a[i][1]),f[i-1][1]+dis(a[i-1][1],a[i][0])+dis(a[i][0],a[i][1]))+1;
	}
    printf("%d",min(f[n][0]+dis(a[n][0],n),f[n][1]+dis(a[n][1],n)));
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}