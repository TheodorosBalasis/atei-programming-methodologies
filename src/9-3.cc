#include <iostream>
#include "./9-1.cc"

using std::cin;
using std::cout;
using std::endl;

class A {
   public:
	int x;
	float y;
	char c;
	char s[20];
};

int main(void) {
    A objA, objB;

    cout << "Enter object A's values:" << endl;
    cout << "Enter x: ";
    cin >> objA.x;
    cout << "Enter y: ";
    cin >> objA.y;
    cout << "Enter c: ";
    cin >> objA.c;
    cout << "Enter s: ";
    cin >> objA.s;
    cout << endl;

    cout << "Enter object B's values:" << endl;
    cout << "Enter x: ";
    cin >> objB.x;
    cout << "Enter y: ";
    cin >> objB.y;
    cout << "Enter c: ";
    cin >> objB.c;
    cout << "Enter s: ";
    cin >> objB.s;

    cout << endl;

    cout << "Pre-swap" << endl << endl;

    cout << "Object A" << endl;
    cout << objA.x << endl;
    cout << objA.y << endl;
    cout << objA.c << endl;
    cout << objA.s << endl;

    cout << endl;

    cout << "Object B" << endl;
    cout << objB.x << endl;
    cout << objB.y << endl;
    cout << objB.c << endl;
    cout << objB.s << endl;

    cout << endl;

    swapx<A>(objA, objB);

    cout << "Post-swap" << endl << endl;

    cout << "Object A" << endl;
    cout << objA.x << endl;
    cout << objA.y << endl;
    cout << objA.c << endl;
    cout << objA.s << endl;

    cout << endl;

    cout << "Object B" << endl;
    cout << objB.x << endl;
    cout << objB.y << endl;
    cout << objB.c << endl;
    cout << objB.s << endl;

    return 0;
}