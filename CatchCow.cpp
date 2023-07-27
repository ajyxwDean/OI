#include <bits/stdc++.h>
using namespace std;
bool vis[1000005];
int n, k;
struct node {
    int x, step;
};
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
        }else {
            if(n1.x - 1 >= 0 && !vis[n1.x - 1]) {
                vis[n1.x - 1] = 1;
                que.push({n1.x - 1, n1.step + 1});
            }
            if(n1.x + 1 <= 100000 && !vis[n1.x + 1]) {
                vis[n1.x + 1] = 1;
                que.push({n1.x + 1, n1.step + 1});
            }
            if(n1.x * 2 <= 100000 && !vis[n1.x * 2]) {
                vis[n1.x * 2] = 1;
                que.push({n1.x * 2, n1.step + 1});
            }
        }
    }
}
int main() {
    int n, k;
    bfs();
    return 0;
}