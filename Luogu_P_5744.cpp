//【深基7.习9】培训
#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
struct Stu {
    string name;
    int age;
    int score;
}stu[N];
int n;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> stu[i].name;
        cin >> stu[i].age;
        cin >> stu[i].score;
        stu[i].age++;
        stu[i].score = stu[i].score * 6 / 5;
        if(stu[i].score > 600) stu[i].score = 600;
        cout << stu[i].name << " " << stu[i].age << " " << stu[i].score << endl;
    }
    return 0;
}