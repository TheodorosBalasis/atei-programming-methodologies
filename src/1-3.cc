#include <iostream>

using std::cout;
using std::endl;

int main() {
	for (int i = 1; i <= 20; i++) {
		cout << i << ' ';
	}
	cout << endl;

	for (int i = 1; i <= 20; i++) {
		cout << (i % 2 == 0 ? -i : i) << ' ';
	}
	cout << endl;

	for (int i = 1; i <= 20; i++) {
		cout << i << ' ' << -i << ' ';
	}
	cout << endl;

	int lastNum = 0, sum = 1;
	for (int i = 0; i < 10; i++) {
		cout << sum << ' ';
		int temp = lastNum;
		lastNum = sum;
		sum += temp;
	}
	cout << endl;

	return 0;
}