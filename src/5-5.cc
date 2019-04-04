#include <iostream>

using std::cin;
using std::cout;
using std::dec;
using std::endl;
using std::hex;

void toHex(int i);
void toBinary(int i);
int twosComplement(int i);

int main() {
	int num;

	cout << "Enter a number: ";
	cin >> num;

	cout << endl << "In hex: ";
	toHex(num);
	cout << endl << "In binary: ";
	toBinary(num);
	cout << endl << "Two's complement: " << dec << twosComplement(num) << endl;

	return 0;
}

void toHex(int i) {
	cout << hex << i;
}

void toBinary(int i) {
	int size = sizeof(int) * 8;
	// Extra character for string terminator.
	char bits[size + 1];

	for (int j = 0; j < size; j++) {
		// Assignment done in reverse order to avoid using helper array to
		// reverse the order after assignment.
		bits[size - 2 - j] = (i >> j) & 1 ? '1' : '0';
	}
	bits[size] = 0;

	cout << bits;
}

int twosComplement(int i) {
	return ~i + 1;
}