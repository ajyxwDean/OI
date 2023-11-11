#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

const int N = 2e5 + 10;
typedef long long LL;

struct PII{ //Pair Int Int
    LL id, w;
}a[N];

LL tt, n;
LL s[N];
LL res[N];
LL tot = 0;

bool cmp(PII, PII);

int main() {
    #ifdef LOCAL
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> tt;
    while (tt--)
    {
        memset(a, 0, sizeof a);
        memset(s, 0, sizeof s);
        cin >> n;
        LL i, j, idx = -1;
        tot = 0;
        for(i = 1; i <= n; i++) 
        {
            cin >> a[i].w;
            a[i].id = i;
        }
        sort(a + 1, a + n + 1, cmp);
        for(i = 1; i <= n; i++) s[i] = s[i - 1] + a[i].w;
        for(idx = n; idx >= 2; idx --)
            if(s[idx - 1] < a[idx].w) break;
        for(j = idx ; j <= n; j++)
        {
            tot++;
            res[tot] = a[j].id;
        }
        sort(res + 1, res + tot + 1);
        cout << tot << '\n';
        for(i = 1; i <= tot; i++)
        {
            cout << res[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}

bool cmp(PII a, PII b) {
    return a.w < b.w;
}
/*
input:
2
4
1 2 4 3
5
1 1 1 1 1
Expected Output:
3
2 3 4 
5
1 2 3 4 5
Reveived Output:

*/