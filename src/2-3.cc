#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int array[3][4];
    int numberOfEvenNums = 0;

    cout << "Enter integers for a 3x4 array: " << endl << endl;

    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 4; j++) {
            cout << "Enter [" << i << ',' << j << "]: ";
            cin >> array[i][j];

            if (array[i][j] % 2 == 0) {
                numberOfEvenNums++;
            }
        }
    }
    cout << endl;

    cout << "Number of even numbers entered: " << numberOfEvenNums << endl;

    return 0;
}