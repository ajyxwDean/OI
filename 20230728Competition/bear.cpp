#include <bits/stdc++.h>
using namespace std;
bool vis[100005];
int n, k;
struct node {
    int x, step;
};
int v[1005];
void bfs() {
    queue<node> que; 
    que.push({n, 0});
    vis[n] = 1;
    while(!que.empty()) {
        node n1 = que.front();
        que.pop();
        if(n1.x == k) {
            cout << n1.step;
            return ;
        } else if(n1.x > k){
            cout << -1;
         	return ;   
        } else {
            if(n1.x - v[n1.x] >= 0 && !vis[n1.x - v[n1.x]]) {
                vis[n1.x - v[n1.x]] = 1;
                que.push({n1.x - v[n1.x], n1.step + 1});
            }
            if(n1.x + v[n1.x] <= 100000 && !vis[n1.x + v[n1.x]]) {
                vis[n1.x + v[n1.x]] = 1;
                que.push({n1.x + v[n1.x], n1.step + 1});
            }
        }
    }
}
int main() {
    #ifndef LOCAL
        freopen("bear.in", "r", stdin);
        freopen("bear.out", "w", stdout);
    #endif
    int aaa;
    cin >> aaa;
    cin >> n >> k;
    for(int i = 1; i <= aaa; i++){
     	cin >> v[i];   
    }
    bfs();
    #ifndef LOCAL
        fclose(stdin);
        fclose(stdout);
    #endif
    return 0;
}