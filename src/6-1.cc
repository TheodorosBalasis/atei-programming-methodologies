#include <fstream>
#include <iostream>

using std::cout;
using std::endl;
using std::ifstream;

void printFileByChar(ifstream &stream);
void printFileByLine(ifstream &stream);

int main(int argc, char **argv) {
	// If no argument is provided, argv[1] will be garbage data.
	if (argc < 2) {
		cout << "Invalid number of arguments!" << endl;
		return 1;
	}

	ifstream stream;
	stream.open(argv[1]);

	printFileByChar(stream);
	cout << endl << endl;

	stream.close();
	stream.open(argv[1]);

	printFileByLine(stream);
	cout << endl;

	stream.close();

	return 0;
}

void printFileByChar(ifstream &stream) {
	int c;
	while (!stream.eof()) {
		c = stream.get();
		if (c != EOF) {
			cout << (char)c;
		}
	}
}

void printFileByLine(ifstream &stream) {
	char buffer[100];
	while (!stream.eof()) {
		stream.getline(buffer, sizeof(buffer));
		cout << buffer;
		// The newline character is omitted when reading with getline.
		cout << endl;
	}
}