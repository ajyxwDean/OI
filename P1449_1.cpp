#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 5;

char str[1005];//
char tmpNum[1005];//
stack<int> stk;//
int FLAG = 0;
char cha;
int i;
int numa, numb;
int Num;
int k = 0;
int toNum() {
    int res = 0;
    for (long long unsigned int i = 0; i < strlen(tmpNum); i++) {
        if(tmpNum[i] == '*')
            break;
        res = res * 10 + tmpNum[i] - '0';
        tmpNum[i] = '*';
    }
    return res;
}
int main() {
    #ifdef LOCAL
        freopen("in.in","r",stdin);
        freopen("out.out", "w", stdout);
    #endif
    cin >> str;
    cha = str[0];
    while (cha != '@')
    {
        if(FLAG == 0)
            i = 0;
        if(cha <= '9' && cha >= '0') {
            FLAG = 1;
            tmpNum[i] = cha;
            i++;
        }
        if(cha == '.') {
            FLAG = 0;
            /* int */Num = toNum();
            stk.push(Num);
        }
        if(cha > '9' && cha < '0' && cha != '.') {
            numa = stk.top();
            stk.pop();
            numb = stk.top();
            stk.pop();
            if(cha == '+') stk.push(numa + numb);
            if(cha == '*') stk.push(numa * numb);
            if(cha == '-') stk.push(numb - numa);
            if(cha == '/') stk.push(numb / numa);
        }
        k++;
        cha = str[k];
    }
    cout << stk.top();
}