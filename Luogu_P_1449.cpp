#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 5;
#define ll long long
#define LL long long
#define P printf
template <typename T>
inline void read(T &a)
{
    T s = 0, w = 1;
    char ch = getchar();
    while (!isdigit(ch))
    {
        if (ch == '-')
        {
            w = -1;
        }
        ch = getchar();
    }
    while (isdigit(ch))
    {
        s = s * 10 + ch - 48;
        ch = getchar();
    }
    a = s * w;
}
char str[MAXN];
char tmpNum[MAXN];
stack<int> stk;
int FLAG = 0;
char cha;
int i;
int numa, numb;
int k = 0;

int cal(int __a, int __b, char __op) {
    if(__op == '+')
        return __a + __b;
    else if(__op == '-')
        return __b - __a;
    else if(__op == '*')
        return __a * __b;
    else if(__op == '/')
        return __b / __a;
    return -1;
}

int toNum() {
    int res = 0;
    for (int i = 0; i < strlen(tmpNum); i++) {
        if(tmpNum[i] == '*')
            break;
        res = res * 10 + tmpNum[i] - '0';
        tmpNum[i] = '*';
    }
    return res;
}

int main()
{
    cin >> str;
    cha = str[0];
    while (cha != '@')
    {
        if(FLAG == 0)
            i = 0;
        if (cha >= '0' && cha <= '9')
        { //
            FLAG = 1;
            tmpNum[i] = cha;
            i++;
        }
        if(cha == '.') {
            FLAG = 0;
            int Num = toNum();
            stk.push(Num);
        }
        if ((cha < '0' || cha > '9') && cha != '.')
        {
            numa = stk.top();
            stk.pop();
            numb = stk.top();
            stk.pop();
            if(cha == '+')
                stk.push(numa + numb);
            if(cha == '*')
                stk.push(numa * numb);
            if(cha == '-')
                stk.push(numb - numa);
            if(cha == '/')
                stk.push(numb / numa);
        }
        k++;
        cha = str[k];
    }
    cout << stk.top();
    return 0;
}
