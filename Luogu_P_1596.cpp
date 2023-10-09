#include <bits/stdc++.h>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int N = 105;typedef unsigned long long ull;
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
char G[N][N];
//py
const int dx[] = {1, 1, 1, 0, 0,-1,-1,-1};
const int dy[] = {1, 0,-1, 1,-1,-1, 1, 0};
int n, m;
int ans = 0;
void dfs(int x, int y) {
    G[x][y] = '.';
    for(int i = 0; i < 8; i++) {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if(xx <= n && xx >= 0 && yy < m && yy >= 0 && G[xx][yy] == 'W') dfs(xx, yy);
    }
    return ;
}
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    scanf("%d%d", &n, &m);
    for(int i = 0; i <= n; i++) {
        scanf("%s", G[i]);
    }
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j < m; j++) {
            if(G[i][j] == 'W') {
                dfs(i, j);
                ans ++;
            }
        }
    }
    printf("%d", ans);

    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}