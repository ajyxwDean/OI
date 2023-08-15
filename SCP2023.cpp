// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     cout << "BCDBCCABABACADCTFFFBCFTT" << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 650, b = 934;
//     int c = (a&b)^(a|b);
//     cout << c;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int a[] = {5, 4, 3, 2, 1};
//     auto p = a + 3;
//     auto q = &p;
//     (*q) ++;
//     auto k = *p;
//     cout << sizeof(k) << " " << k;
//     return 0;
// }
//0.3 * 16 = 4.8 -> 4
//0.8 * 16 = 12.8 -> c
//
// #include <bits/stdc++.h>
// using namespace std;
// stack<char> op,dat;
// stack<int> num, dat2;
// const int INF = 0x3f3f3f3f;
// // string s;
// // operator: +-*/^
// int chk(char c)
// {
//     switch (c)
//     {
//         case '+':
//             return 1;
//         case '-':
//             return 1;
//         case '*':
//             return 2;
//         case '/':
//             return 2;
//         case '^':
//             return 3;
//         case '(':
//             return 0;
//         case ')':
//             return 0;
//         default:
//             return -1;
//     }
// }
// /// @brief cal __a __op __b
// /// @param __a first param
// /// @param __b second param
// /// @param __op operator
// /// @return the result
// int cal(int __a, int __b, char __op) {
//     switch(__op) {
//         case '+':
//             return __a + __b;
//         case '-':
//             return __a - __b;
//         case '*':
//             return __a * __b;
//         case '/':
//             return __a / __b;
//         case '^':
//             return pow(__a, __b);
//         default:
//             return -INF;
//     }
// }

// void change(string s) {
//     int len = s.size();
//     for(int i = 0; i < len; i++) {
//         if(isdigit(s[i])) dat.push(s[i]);
//         else if(s[i] == '(') op.push(s[i]);
//         else if(s[i] == ')') {
//             char tmp = op.top();
//             while(tmp != '(') {
//                 op.pop();
//                 dat.push(tmp);
//                 tmp = op.top();
//             }
//             op.pop();
//         }else if(chk(s[i]) >= 1 && chk(s[i]) <= 3) {
//             if(!op.empty()) {
//                 char tmp = op.top();
//                 while(!op.empty() && chk(s[i]) <= chk(tmp)) {
//                     if(chk(s[i]) == chk(tmp) && s[i] == '^') break;
//                     op.pop();
//                     dat.push(tmp);
//                     if(!op.empty()) tmp = op.top();
//                 }
//             }
//             op.push(s[i]);
//         }
//     }
//     while (!op.empty())
//     {
//         char tmp = op.top();
//         op.pop();
//         dat.push(tmp);
//     }
//     while (!dat.empty())
//     {
//         char tmp = dat.top();
//         dat.pop();
//         op.push(tmp);
//     }
//     while(!op.empty()) {
//         char tmp = op.top();
//         cout << tmp << " ";
//         op.pop();
//         dat.push(tmp);
//     }
//     cout << endl;
// }

// void solveCalc() {
//     while(!dat.empty()) {
//         char tmp = dat.top();
//         dat.pop();
//         op.push(tmp);
//     }
//     while(!op.empty()) {
//         char tmp = op.top();
//         op.pop();
//         if(isdigit(tmp)) num.push(tmp - '0');
//         else  {
//             int x = num.top();
//             num.pop();
//             int y = num.top();
//             num.pop();
//             num.push(cal(y,x,tmp));
//             while(!num.empty()) {
//                 int tmp = num.top();
//                 num.pop();
//                 dat2.push(tmp);
//             }
//             while(!dat2.empty()) {
//                 int tmp = dat2.top();
//                 cout << tmp << " ";
//                 dat2.pop();
//                 num.push(tmp);
//             }
//             while(!op.empty()) {
//                 char tmp = op.top();
//                 cout << tmp << " ";
//                 op.pop();
//                 dat.push(tmp);
//             }
//             while(!dat.empty()) {
//                 char tmp = dat.top();
//                 dat.pop();
//                 op.push(tmp);
//             }
//             cout << endl;
//         }
//     }
// }

// int main() {
//     string s;
//     cin >> s;
//     change(s);
//     solveCalc();
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
// string s, t, a, b;
int a[100005], b[100005], n, m;
void very_quick_sort(int l, int r, int p, int q){
    if(l >= r || p > q){ // ①
        return;
    }
    int mid = (l + r) / 2;
    int p0 = p - 1;
    int q0 = q + 1;
    for(int i = p;i <= q;i ++){
        if(a[i] > mid) b[++ p0] = a[i];
        else b[-- q0] = a[i];
    }
    for(int i = p;i <= q;i ++)
        a[i] = b[i];
    very_quick_sort(mid + 1, r, p, p0);
    very_quick_sort(l, mid, q0, q);
}
int main() {
    cin >> n >> m;
    for(int i = 1;i <= n;i ++)
        cin >> a[i];
    very_quick_sort(1, m, 1, n);
    // ②
    for(int i = 1;i <= n;i ++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}