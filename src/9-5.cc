#include <iostream>

using std::cout;
using std::endl;

template <typename T>
class stack {
   private:
    int size;
    T *t, *v;

   public:
    stack(int sz = 10) {
        size = sz;
        v = new T[size];
        t = v;
    }

    ~stack() {
        delete[] v;
    }

    void push(T val) {
        if ((t - v) == size) {
            return;
        } else {
            ++t;
            *t = val;
        }
    }

    T pop() {
        if (t == v) {
            return T();
        } else {
            return *t--;
        }
    }

    inline bool empty() {
        return v == t;
    }
};

int main(void) {
    stack<int> si(20);

    si.push(10);
    si.push(20);
    si.push(30);
    si.push(40);
    si.push(50);

    while (!si.empty()) cout << si.pop() << endl;

    stack<float> sf(20);

    sf.push(1.1);
    sf.push(2.2);
    sf.push(3.3);
    sf.push(4.4);
    sf.push(5.5);

    stack<float> g;
    cout << "sss" << sizeof(g) << endl;

    while (!sf.empty()) cout << sf.pop() << endl;
}