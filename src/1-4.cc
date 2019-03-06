#include <iostream>

using std::cout;
using std::endl;

int main() {
	const int height = 5;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < height; j++) {
			cout << (j < height - i - 1 ? ' ' : '*');
		}
		cout << endl;
	}
	cout << endl;

	for (int i = height - 1; i >= 0; i--) {
		for (int j = 0; j < height; j++) {
			cout << (j < height - i - 1 ? ' ' : '*');
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < (2 * height - 1); j++) {
			cout << ((j < height - i - 1) || (j > height + i - 1) ? ' ' : '*');
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}