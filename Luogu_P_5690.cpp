/*
 * @Author: LStylus 
 * @Date: 2023-10-19 22:00:33 
 * @Last Modified by:   LStylus 
 * @Last Modified time: 2023-10-19 22:00:33 
 */
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

string a;

/*

99 - 99
11 - 11
23 - 44
12 - 33


*/

int main() {
    getline(cin, a);
    int month = (a[0] - '0') * 10 + a[1] - '0';
    int day = (a[3] - '0') * 10 + a[4] - '0';
    if(day >= 1 && day <= 31)
        if(day != 28)
            if(month >= 1 && month <= 12) {printf("0"); return 0;}
            else if(month / 10 == 1) {printf("1"); return 0;}
        else if(month == 2) {printf("0"); return 0;}
    return 0;
}