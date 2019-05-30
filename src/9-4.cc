#include <iostream>

using std::cout;
using std::endl;

template <class X, class Y>
class AB {
    X i;
    Y k;

   public:
    AB(X a, Y b) {
        i = a;
        k = b;
    }

    X geti() {
        return i;
    }

    Y getk() {
        return k;
    }
};

int main(void) {
    AB<int, char> ob1(12, 'Z');
    cout << ob1.geti() << " " << ob1.getk() << endl;

    AB<long, double> ob2(5L, 3.1);
    cout << ob2.geti() << " " << ob2.getk() << endl;

    return 0;
}