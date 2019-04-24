#include <fstream>
#include <iostream>

using std::atof;
using std::atoi;
using std::cout;
using std::endl;
using std::ifstream;

int main(int argc, char **argv) {
	if (argc < 2) {
		cout << "Invalid number of arguments!" << endl;
		return 1;
	}

	ifstream stream;
	stream.open(argv[1]);

	// The array doesn't need to be initialized as getline automatically adds
	// a string terminator.
	char nameStr[100], numberStr[100];
	int numberOfEntries;

	stream.getline(nameStr, 100, ' ');
	stream.getline(numberStr, 100, ' ');
	numberOfEntries = atoi(numberStr);

	cout << nameStr << ' ' << numberStr << ' ';

	// An extra character is needed for the string terminator.
	char codeStr[5], quantityStr[2], priceStr[6];
	for (int i = 0; i < numberOfEntries; i++) {
		stream.getline(codeStr, 5, ' ');
		stream.getline(quantityStr, 2, ' ');
		stream.getline(priceStr, 6, ' ');

		cout << codeStr << ' ' << quantityStr << ' ' << priceStr << ' ';
	}

	cout << endl;
	stream.close();

	return 0;
}