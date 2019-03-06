#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::rand;

int main() {
	int numberOfIntegers;

	cout << "Enter the number of integers to be generated: ";
	cin >> numberOfIntegers;

	int array[numberOfIntegers];

	for (int i = 0; i < numberOfIntegers; i++) {
		array[i] = rand();
	}

	int max = 0;

	for (int i = 0; i < numberOfIntegers; i++) {
		if (array[i] > max) {
			max = array[i];
		}
	}

	cout << "Largest number generated: " << max << endl;

	return 0;
}