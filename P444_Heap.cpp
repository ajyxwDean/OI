#include <bits/stdc++.h>
using namespace std;//Ctrl + \ 注释, Ctrl + L 选中当前行
const int MAXN = 1e5 + 5;typedef unsigned long long ull;
const int INF = 0x7fffffff;
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
int heap[MAXN], heap_size = 0;
void put(int d) {
    heap[++heap_size] = d;
    push_heap(heap, heap + heap_size, greater<int>());
}
//=============================
int main(){
    clock_t Time = clock();
    #ifdef LOCAL
        freopen("in.in","r",stdin);freopen("out.out","w",stdout);
    #endif
    //=============================
    for(int i = 0; cin >> heap[i]; i++) heap_size++;
    put(1);
    for(int i = 0; i < heap_size; i++) {
        cout << heap[i] << " ";
    }
    cout << "\n\n\n";
    cout << heap_size;
    //=============================
    #ifdef LOCAL
        cerr << "Time Used:" << clock() - Time << "ms" << endl;
    #endif
    return 0;
}