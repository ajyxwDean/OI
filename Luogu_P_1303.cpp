/*
#include <bits/stdc++.h>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int MAXN = 1e5 + 5;typedef unsigned long long ull;
const int INF = 0x7fffffff;
#define ll                 long long
#define LL                 long long
template <typename T>inline void read(T &a){
    T s = 0, w = 1; char ch = getchar();
    while (!isdigit(ch)){
        if (ch == '-') w = -1; 
        ch = getchar();
    }
    while (isdigit(ch)) s = s * 10 + ch - 48,ch = getchar();
    a = s * w;
}
//=============================
char sa[MAXN], sb[MAXN];
int a[MAXN], b[MAXN];
int c[MAXN];
int lena, lenb, len;
//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    cin >> sa >> sb;
    lena = strlen(sa);
    lenb = strlen(sb);
    for(int i = 1; i <= lena; i++) a[i] = sa[lena - i] - '0';
    for(int i = 1; i <= lenb; i++) b[i] = sb[lenb - i] - '0';
    for(int i = 1; i <= lenb; i++)
        for(int j = 1; j <= lena; j++)
            c[i + j - 1] += a[j] * b[i];
    for(int i = 1; i < lena + lenb; i++)
        if(c[i] >= 10) {
            c[i + 1] += c[i] / 10;
            c[i] %= 10;
        }
    len = lena + lenb;  
    while(c[len] == 0 && len > 1) len --;
    for(int i = len; i >= 1; i--) cout << c[i];

    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

const int N = 1e5 + 5;

int a[N], b[N], c[N];
char sa[N], sb[N];
int lena, lenb, len;

int main() {
    // freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);
    cin >> sa >> sb;
    lena = strlen(sa);
    lenb = strlen(sb);
    // reverse(sa + 1, sa + lena + 1);
    // reverse(sb + 1, sb + lenb + 1);
    for(int i = 1; i <= lena; i++) a[i] = sa[lena - i] - '0';
    for(int i = 1; i <= lenb; i++) b[i] = sb[lenb - i] - '0';
    for(int i = 1; i <= lenb; i++) 
        for(int j = 1; j <= lena; j++) 
            c[i + j - 1] += a[j] * b[i];
    len = lena + lenb;
    for(int i = 1; i < len; i++) {
        if(c[i] >= 10) {
            c[i + 1] += c[i] / 10;
            c[i] %= 10;
        }
    }
    while(c[len] == 0 && len > 1) len--;
    for(int i = len; i >= 1; i--) printf("%d", c[i]);

    // fclose(stdin);
    // fclose(stdout);
    return 0;
}