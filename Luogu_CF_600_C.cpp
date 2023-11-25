#include <iostream>
#include <climits>
#include <queue>
#include <set>
using namespace std;

const int N = 2e5 + 1;
const int V = 127;

char str[N];
int bucket[CHAR_MAX];

int main(int argc, const char * argv[]) {
    scanf("%s", str + 1);
    int len = 0; for ( ; str[++len]; ++bucket[str[len]]); --len;
    
    set<char> st;
    for (char i = 'a'; i <= 'z'; ++i) {
        if (bucket[i] & 1) {
            st.insert(i);
        }
    }
    while (st.size() > 1) {
        char maxx = *--st.end(), minn = *st.begin();
        st.erase(--st.end()); st.erase(st.begin());
        --bucket[maxx]; ++bucket[minn];
    }
    
    string out;
    for (char i = 'a'; i <= 'z'; ++i) {
        for (int j = 1; j <= bucket[i] >> 1; ++j) {
            out += i;
        }
    }
    string hero = out;
    reverse(hero.begin(), hero.end());
    for (char i = 'a'; i <= 'z'; ++i) {
        if (bucket[i] & 1) {
            out += i;
            break;
        }
    }
    out += hero;
    for (auto i : out) {
        putchar(i);
    }
    putchar('\n');
    return 0;
}