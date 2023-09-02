#include <bits/stdc++.h>
#include <random>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int MAXN = 1e5 + 5;typedef unsigned long long ull;
#define ll                 long long
#define LL                 long long
template <typename T>inline void read(T &a){
    T s = 0, w = 1; char ch = getchar();
    while (!isdigit(ch)){
        if (ch == '-') w = -1; ch = getchar();
    }
    while (isdigit(ch)) s = s * 10 + ch - 48,ch = getchar();
    a = s * w;
}
//=============================
int TRand() {
    std::random_device RANDOM;
    std::default_random_engine ENGINE(RANDOM());
    std::uniform_int_distribution<int> UNIFORM_DIST(1, 6);
    return UNIFORM_DIST(ENGINE);
}
int cockArr[MAXN], bubArr[MAXN], _size;
void cockTail_Sort() {
    int times = 0;
    for(int i = 0; i < _size / 2; ++i) {
        bool bchanged = false;
        for(int j = 0; j < _size - i; ++j) {
            if(j + 1 < _size && cockArr[j] > cockArr[j + 1]) {
                bchanged = true;
                swap(cockArr[j], cockArr[j + 1]);
            }
        }
        if(!bchanged) break;
        for(int k = _size - i - 1; k > 0; k--) 
            if(k >= 1 && cockArr[k] < cockArr[k + 1]) swap(cockArr[k], cockArr[k - 1]);
        times++;
    }
}
//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================    
    int aaa = 12;
    for(int i = 0; i < 12; i++) {

    }
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}