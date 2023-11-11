#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 5e2 + 5;

int n, m, e;
struct node {
    int to, nxt;
}E[N];
int head[N];
int tot = 0;
void add(int u, int v) {
    E[tot].to = v;
    E[tot].nxt = head[u];
    head[u] = tot++;
}

int main() {    
    scanf("%d %d %d", &n, &m, &e);
    for(int i = 1; i <= e; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        add(u, v);
        add(v, u);
    }
    
    return 0;
}
//03357090000