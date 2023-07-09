#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1005;
struct stu {
    string name;
    int math;
    int chinese;
    int english;
    int id;
} a[MAXN];
bool cmp(stu stua, stu stub) {
    int tota = stua.math + stua.chinese + stua.english;
    int totb = stub.math + stub.chinese + stub.english;
    if(tota != totb) {
        return tota > totb;
    }else {
        if(stua.chinese != stub.chinese) {
            return stua.chinese > stub.chinese;
        }else {
            if(stua.math != stub.math) {
                return stua.math > stub.math;
            }else {
                if(stua.english != stub.english) {
                    return stua.english > stub.english;
                }else {
                    return stua.id < stub.id;
                }
            }
        }
    }
}
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].math >> a[i].chinese >> a[i].english;
        a[i].id = i + 1;
    }
    sort(a, a + n, cmp);
    for (int i = 0;i < n; i++) {
        cout << a[i].name << " " << a[i].math + a[i].chinese + a[i].english << endl;
    }
        return 0;
}