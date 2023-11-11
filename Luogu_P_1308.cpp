#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>

using namespace std;

string art;
string Word;
string nw;
int cnt = -1;
int i1 = 0;
// ==< ==> -->

int main() {
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    getline(cin, art);
    getline(cin, Word);
    cout << art << endl;
    cout << Word << endl;
    transform(art.begin(), art.end(), art.begin(), ::tolower);
    transform(Word.begin(), Word.end(), Word.begin(), ::tolower);
    cout << art << endl;
    cout << Word << endl;
    cout << art.length() << endl;
    // printf("%d\n", size);
    // cout << Word << " " << art;
    // return 0;
    for(int i = 0; i < art.length(); i++) {
        if(art[i] == ' ') {
            if(Word == nw) {
                if(cnt == -1) {
                    i1 = i;
                    cnt = 1;
                    continue;
                }
                cnt++;
            }
        }
        else nw += art[i];
        cout << nw << " \n";
    }
    if(!cnt) printf("-1");
    else printf("%d %d", cnt, i1);
    fclose(stdin);
    fclose(stdout);
    return 0;
}