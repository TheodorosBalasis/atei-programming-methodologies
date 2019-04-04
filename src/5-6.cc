#include <iostream>

using std::cin;
using std::cout;
using std::endl;

long int f(long int a, int n, int t, int &flag);

int main() {
    long int a;
    int n, t;

    cout << "Enter a number: ";
    cin >> a;

    cout << "Enter the index of the bit to change: ";
    cin >> n;

    cout << "Enter the new value: ";
    cin >> t;

    int flag;
    long int modifiedInt = f(a, n, t, flag);

    if (flag) {
        cout << "Modified integer: " << modifiedInt << endl;
    } else {
        cout << "Invalid input!" << endl;
    }

    return 0;
}

long int f(long int a, int n, int t, int &flag) {
    if (n >= (sizeof(long int) * 8) || (t != 1 && t != 0)) {
        flag = 0;
        return a;
    } else {
        flag = 1;
    }

    long int newBit = (long)t << (long)n;
    long int bitmask = 1L << (long)n;

    // AND the integer with the bitmask to leave only the relevant bit, then
    // XOR it with the new bit to check if they're different.
    if ((a & bitmask) ^ newBit) {
        if ((a & bitmask) < newBit) {
            return a + bitmask;
        } else {
            return a - bitmask;
        }
    }

    return a;
}