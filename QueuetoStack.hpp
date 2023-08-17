#include <bits/stdc++.h>
using namespace std;

namespace NamespStack {

using std::cin;
using std::cout;
using std::min;
using NamespStack::MyStack;
using NamespStack::STATUS;
using std::max;

typedef bool STATUS;
typedef  unsigned long long stk_size_t;
#define OK true
#define ERR false
using std::queue;

template <typename T>
class MyStack{
public:
    MyStack(int stSize);
    MyStack();
    void push(T _Element);
    STATUS pop();
    inline stk_size_t size();
    inline T top();
    inline bool empty();
private:
    typedef queue<T> Queue;
    int MAXN = 10005;
    stk_size_t Stack_Size;
    Queue que;
};

template <typename T>
MyStack<T>::MyStack() {
    stack<int> stk;
    // stk.
}

template <typename T>
MyStack<T>::MyStack(int stSize) {
    Stack_Size = stSize;
}
/// @brief push an element in stack
/// @tparam T type of element
/// @param _Element element what will be pushed

template <typename T>
void MyStack<T>::push(T _Element){
    using std::queue;
    que.push(_Element);
    NamespStack::MyStack<T>::Stack_Size++;
}

template <typename T>
STATUS MyStack<T>::pop() {
    if (que.empty()) {
        return ERR;
    }
    NamespStack::stk_size_t rSize = que.size();
    rSize--;
    while(rSize--) {
        MyStack::que.push(MyStack::que.front());
        MyStack::que.pop();
    }
    // T rResult = MyStack::que.front();
    MyStack::que.pop();
    return OK;
}

template <typename T>
inline NamespStack::stk_size_t MyStack<T>::size() {
    return MyStack::Stack_Size;
}

/// @brief get the top element
/// @tparam T type of element
/// @return top element
template <typename T>
inline T MyStack<T>::top() {
    return MyStack::que.back();
}

template <typename T>
inline bool NamespStack::MyStack<T>::empty() {
    return !NamespStack::MyStack<T>::Stack_Size ? true : false;
}

}