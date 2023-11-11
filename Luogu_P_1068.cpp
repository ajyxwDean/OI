/*
 * @Author: LStylus 
 * @Date: 2023-10-19 22:21:44 
 * @Last Modified by:   LStylus 
 * @Last Modified time: 2023-10-19 22:21:44 
 */
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

const int N = 5005;

int n, m;
int cnt = 0;
struct stu {
    int id, res;
}a[N];
bool cmp1(stu a1, stu b) {
    if(a1.res == b.res) return a1.id < b.id;
    else return a1.res < b.res;
}

bool cmp(stu a1, stu b) {
    return a1.res < b.res;
}

int main() {
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++) scanf("%d %d", &a[i].id, &a[i].res);
    int m11 = floor(m * 1.5);
    int m1 = a[m11].res;
    // m11 + 1;
    sort(a + 1, a + n + 1, cmp);
    int i1 = -1;
    for(int i = 1; i <= n; i++) if(a[i].res < m1) i1 = i;
    for(int i = i1; i <= n; i++) a[i].id = -1, a[i].res = -1;
    
    fclose(stdin);
    fclose(stdout);
    return 0;
}