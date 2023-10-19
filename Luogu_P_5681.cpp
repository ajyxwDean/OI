#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef long long LL;
const int N = 105;

LL a, b, c;

int main() {
    // scanf("%lld %lld %lld", n1, n, m);
    // LL a = n1 * n1;
    // LL b = n * m;
    scanf("%lld %lld %lld", &a, &b, &c);
    if(a * a > b * c) printf("Alice");
    else printf("Bob");
    return 0;
}