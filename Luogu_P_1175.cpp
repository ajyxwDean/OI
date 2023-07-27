#include <bits/stdc++.h>
using namespace std;
stack<char> op,dat;
stack<int> num, dat2;
const int INF = 0x3f3f3f3f;
// string s;
// operator: +-*/^
int chk(char c)
{
    switch (c)
    {
        case '+':
            return 1;
        case '-':
            return 1;
        case '*':
            return 2;
        case '/':
            return 2;
        case '^':
            return 3;
        case '(':
            return 0;
        case ')':
            return 0;
        default:
            return -1;
    }
}
/// @brief cal __a __op __b
/// @param __a first param
/// @param __b second param
/// @param __op operator
/// @return the result
int cal(int __a, int __b, char __op) {
    switch(__op) {
        case '+':
            return __a + __b;
        case '-':
            return __a - __b;
        case '*':
            return __a * __b;
        case '/':
            return __a / __b;
        case '^':
            return pow(__a, __b);
        default:
            return -INF;
    }
}

void change(string s) {
    int len = s.size();
    for(int i = 0; i < len; i++) {
        if(isdigit(s[i])) dat.push(s[i]);
        else if(s[i] == '(') op.push(s[i]);
        else if(s[i] == ')') {
            char tmp = op.top();
            while(tmp != '(') {
                op.pop();
                dat.push(tmp);
                tmp = op.top();
            }
            op.pop();
        }else if(chk(s[i]) >= 1 && chk(s[i]) <= 3) {
            if(!op.empty()) {
                char tmp = op.top();
                while(!op.empty() && chk(s[i]) <= chk(tmp)) {
                    if(chk(s[i]) == chk(tmp) && s[i] == '^') break;
                    op.pop();
                    dat.push(tmp);
                    if(!op.empty()) tmp = op.top();
                }
            }
            op.push(s[i]);
        }
    }
    while (!op.empty())
    {
        char tmp = op.top();
        op.pop();
        dat.push(tmp);
    }
    while (!dat.empty())
    {
        char tmp = dat.top();
        dat.pop();
        op.push(tmp);
    }
    while(!op.empty()) {
        char tmp = op.top();
        cout << tmp << " ";
        op.pop();
        dat.push(tmp);
    }
    cout << endl;
}

void solveCalc() {
    while(!dat.empty()) {
        char tmp = dat.top();
        dat.pop();
        op.push(tmp);
    }
    while(!op.empty()) {
        char tmp = op.top();
        op.pop();
        if(isdigit(tmp)) num.push(tmp - '0');
        else  {
            int x = num.top();
            num.pop();
            int y = num.top();
            num.pop();
            num.push(cal(y,x,tmp));
            while(!num.empty()) {
                int tmp = num.top();
                num.pop();
                dat2.push(tmp);
            }
            while(!dat2.empty()) {
                int tmp = dat2.top();
                cout << tmp << " ";
                dat2.pop();
                num.push(tmp);
            }
            while(!op.empty()) {
                char tmp = op.top();
                cout << tmp << " ";
                op.pop();
                dat.push(tmp);
            }
            while(!dat.empty()) {
                char tmp = dat.top();
                dat.pop();
                op.push(tmp);
            }
            cout << endl;
        }
    }
}

int main() {
    #ifdef LOCAL
        freopen("in.in","r",stdin);
        freopen("out.out","w",stdout);
    #endif
    string s;
    cin >> s;
    change(s);
    solveCalc();
    return 0;
}
