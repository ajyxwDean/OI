#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

typedef double DB;

int main() 
{
    // freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);
    DB a, b, c, p;
    cin >> a >> b >> c;
    p = (a + b + c) / 2.0;
    printf("%.1f", sqrt(p * (p - a) * (p - b) * (p - c)));
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}