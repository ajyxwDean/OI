#include <bits/stdc++.h>
using namespace std;
char chc[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// char cha[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int chhh(char a) {
    return a - 'A';
}
int main() {
    int n;
    cin >> n;
    // char ch = 'A';
    /*
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

        }
        ch = chc[i];
    }*/
    char ch = 'A'; //当前行的第一个字符
    char chaa = 'A'; //当前行的第j个字符
    for (int i = 0; i < n; i++) {
        // chaa = ch;
        // for(int j = 0; j < n; j++) {
        //     // chaa = chc[chhh(ch) + 1];
        //     // chaa = chc[j + 1];

        //     printf("%c", chaa);
        // }
        // ch = chc[i + 1];
        // chaa = ch;
        // printf("\n");
        chaa = ch;
        int cnt = 0;
        while(cnt < n) {
            printf("%c", chaa);
            chaa++;
            cnt++;
            if(chaa == 'Z'){
                chaa = 'A';
                continue;
            }
        }
        ch = chc[i + 1];
        printf("\n");
    }
    return 0;
}