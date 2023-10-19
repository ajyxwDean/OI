#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

typedef long long LL;
const int N = 1e5 + 5;

LL n, tail, head;
struct Ticket {
    LL used, time, price;
}que[N];
LL cost = 0;

int main() {
    // freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);
    scanf("%lld", &n);
    for(int i = 1; i <= n; i++) {
        LL tak, pri, t;
        scanf("%lld %lld %lld", &tak, &pri, &t);
        if(tak == 0) {
            cost += pri;
            que[tail].used = 0;
            que[tail].price = pri;
            que[tail++].time = t + 45;
        }else {
            while(head < tail && que[head].time < t) {
                head++;
            }
            bool f = false;
            for(int j = head; j < tail; j++) {
                if(que[j].used == 0 && que[j].price >= pri) {
                    f = true;
                    que[j].used = 1;
                    break;
                }
            }
            if(!f) cost += pri;
        }
    }
    printf("%lld", cost);
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}