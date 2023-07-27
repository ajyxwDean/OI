#ifndef CDIFFPRE
#define CDIFFPRE
#include <bits/stdc++.h>
using namespace std;
#define Pfx Prefix_and
#define calcIntvSum calcSumIntrv
#define calcDiff  difference
#define calcIntvD calcIntrv
#define LL  long long
template<typename T> class Diff
{
private:
    T (&Arr)[10005];
    T (&chafen)[10005];
public:
    void LinkArr(T* _a, T* chaf);
    Diff();
    ~Diff();
    void difference();
    void calcArr();
    void calcIntrv(int l, int r, int c);
    T operator[](int _OOF) const ;
    T getArrVal(int _OOF);
    void printArr();
};
template<typename T>
T Diff<T>::getArrVal(int _OOF) {
    return Arr[_OOF];
}

template<typename T>
void Diff<T>::LinkArr(T* _arr, T* chaf){
    Arr = _arr;
    chafen = chaf;
    memset(chafen, 0, sizeof(chafen));
}
template<typename T>
Diff<T>::Diff(){

}
template<typename T>
Diff<T>::~Diff(){
    
}
template<typename T>
void Diff<T>::difference(){
    for(int i = 0;i < sizeof(Arr) / 4; i++){
        chafen[i] = Arr[i] - Arr[i - 1];
    }
}
template<typename T>
void Diff<T>::calcArr(){
    Arr[0] = chafen[0];
    for(int i = 0;i < sizeof(chafen) / 4; i++){
        Arr[i] = Arr[i - 1] + chafen[i]; 
    }
}
template<typename T>
void Diff<T>::calcIntrv(int l, int r, int c){
    difference();
    chafen[l] += c;
    chafen[r + 1] -= c;
    calcArr();
}
template<typename T>
T Diff<T>::operator[](int _OOF) const {
    return chafen[_OOF];
}
template<typename T>
void Diff<T>::printArr() {
    for(int i = 0; i < sizeof(Arr); i++){
        printf("%d",Arr[i]);
    }
}

template<typename T> class Prefix
{
private:
    T (&Arr)[10005];
    T (&Pre)[10005];
public:
    void LinkArr(T* _ARR, T* _PRE);
    void Prefix_and();
    T calcSumIntrv(int l, int r);
    T operator[](int _OOF) const;
    T getArrVal(int _OOF);
    Prefix();
    ~Prefix();
};

template<typename T>
T Prefix<T>::operator[](int _OOF) const{
    return Pre[_OOF];
}

template<typename T>
T Prefix<T>::getArrVal(int _OOF) {
    return Arr[_OOF];
}

/// @brief Please Link Array With Prefix::LinkArr(_ARR, _PRE)
/// @tparam T template
template<typename T>
Prefix<T>::Prefix() {
    
}

template<typename T>
void Prefix<T>::LinkArr(T* _ARR, T* _PRE) {
    Arr = _ARR;
    Pre = _PRE;
}

template<typename T>
void Prefix<T>::Prefix_and() {
    Pre[0] = Arr[0];
    for(int i = 0; i < sizeof(Arr) / sizeof(int); i++) {
        Pre[i] = Pre[i - 1] + Arr[i];
    }
}

template<typename T>
Prefix<T>::~Prefix()
{
    
}

template <typename T>
T Prefix<T>::calcSumIntrv(int l, int r) {
    return Pre[r] - Pre[l] + Arr[l];
}

#endif