#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	int number;

	cout << "Enter a number: ";
	cin >> number;

	// Since 1 is 0...1 in binary form, a bitwise AND with it will
	// either result in 0...1 if the number is odd or
	// 0...0 if the number is even.
	number = number & 1;

	if (number) {
		cout << "Number is odd.";
	} else {
		cout << "Number is even.";
	}

	cout << endl;

	return 0;
}