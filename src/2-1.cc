#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	int array[10];
	int size = sizeof(array) / sizeof(int);

	cout << "Enter 10 integers:" << endl << endl;

	for (int i = 0; i < size; i++) {
		cout << "Enter number " << i + 1 << ": ";
		cin >> array[i];
	}
	cout << endl;

	cout << "Reversed numbers:" << endl;
	for (int i = size - 1; i >= 0; i--) {
		cout << array[i] << ' ';
	}
	cout << endl;

	return 0;
}