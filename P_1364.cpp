#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

const int N = 5e5 + 10;;
const int Z = 26;
const int INF = 0x7fffffff;
using ll = long long;
using LL = ll;
int trie[N][Z];
int tot, cnt[N];

void insert(string s) {
    int len = s.length(), p = 1;
    for(int i = 0; i < len; i++) {
        int ch = s[i] - 'a';
        if(!trie[p][ch]) trie[p][ch] = ++ tot;
        p = trie[p][ch];
        cnt[p] ++;
    }
}

int Query(string s) {
    int len = s.size(), p = 1;
    for(int i = 0; i < len; i++) {
        int ch = s[i] - 'a';
        p = trie[p][ch];
        if(!p) return 0;
    }
    return cnt[p];
}

signed main() {
    
    return 0;
}